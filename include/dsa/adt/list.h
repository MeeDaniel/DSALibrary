/**
 * @file list.h
 * @brief Abstract Data Type (ADT) for a list.
 *
 * This file describes abstract data type of list. Intuitively, List is a
 * sequence of arbitrary elements. List supports creation of an empty list and
 * access operations for its size and elements.
 *
 * @author Daniil Chernykh
 * @date May 2026
 */

#pragma once

namespace dsa::adt {

    /**
     * @class List
     * @brief Interface of the list Intuitively, List is a sequence of
     * arbitrary elements.
     *
     * List supports the following operations:
     * - Create an empty list
     * - Get list size
     * - Check if the list is empty
     * - Get an element at given index
     * - Set an element at given index
     * - Add an element to the end
     * - Remove an element at given index
     *
     * @tparam V Type of stored items.
     *           requirements for V:
     *           - TODO: write requirements for type param V in dsa::adt::List
     *
     * @code
     * dsa::adt::List l;
     * l.add(1);
     * TODO: write detailed example of dsa::adt::List usage
     * @endcode
     */
    template<typename V>
    class List {
    public:
        /**
         * @brief Default constructor. Creates an empty list.
         */
        List() = default;

        virtual ~List() = default;

        /**
         * @brief Counts the number of elements in the list.
         * @return Number of elements in the list.
         */
        [[nodiscard]] virtual int getSize() const = 0;

        /**
         * @brief Checks is the list contains no elements.
         * @return true if the list is empty, false otherwise.
         */
        [[nodiscard]] virtual bool isEmpty() const = 0;

        /**
         * @brief Provides access to the list elements by their indexes.
         * @param index The position of the element (0-based indexing).
         * @return A copy of the element at the given index.
         * @throws std::out_of_range if index is negative or >= getSize().
         */
        virtual V get(int index) const = 0;

        /**
         * @brief Replace the elements at the specified indexes.
         * @param index The position of the element (0-based indexing).
         * @param value New value of the element with given index.
         * @throws std::out_of_range if index is negative or >= getSize().
         */
        virtual void set(int index, V value) = 0;

        /**
         * @brief Expand the list by one element.
         * @param value value of the new element.
         */
        virtual void add(V value) = 0;

        /**
         * @brief Remove the element with the given index. All further elements
         * should shift to the left.
         * @param index The position of the element (0-based indexing).
         * @throws std::out_of_range if index is negative or >= getSize().
         */
        virtual void remove(int index) = 0;
    };

} // namespace dsa::adt
