all:
	make -s -C astar/
	make -s -C breadth/
	make -s -C depth/
	make -s -C generator/

clean:
	make clean -s -C astar/
	make clean -s -C breadth/
	make clean -s -C depth/
	make clean -s -C generator/

fclean: clean
	make fclean -s -C astar/
	make fclean -s -C breadth/
	make fclean -s -C depth/
	make fclean -s -C generator/

re: fclean all

.PHONY: all clean fclean re
