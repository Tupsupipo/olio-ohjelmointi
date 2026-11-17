# inheritance

```mermaid
classDiagram
    class Chef{
        #name string
        +chef(string)
        +makeSalad() void
        +makeSoup() void
    }
    class ItalianChef{
        +ItalianChef(string)
        +getName() string
        +makePasta() void
    }
    Chef <|-- ItalianChef
```



Primary source:

Alaluukas, P. 2026. Olio-ohjelmointi C++-kielellä. Luettavissa: https://peatutor.com/cplus/ Luettu: 16.11.2026.