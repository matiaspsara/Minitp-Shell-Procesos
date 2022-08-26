if [ $# -eq 0 ]
  then
    echo "Debe ejecutar con un parametro al menos"
    exit 1
fi

 cd $HOME
 mkdir "$1"
 touch "$1/contenido_home.txt"
 ls -l /$HOME >>  "$1/contenido_home.txt"
 cat "$1/contenido_home.txt"
 read -p "Presione la tecla enter para salir"
