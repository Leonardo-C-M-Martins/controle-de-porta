idf_component_register(
    SRCS "main.cpp"
         "controller/FimDeCurso.cpp"
         "controller/Led.cpp"
         "controller/Motor.cpp"
         "controller/ServoMotor.cpp"
         "controller/Porta.cpp"
         "controller/WiFi.cpp"

    INCLUDE_DIRS "public/include"
)
