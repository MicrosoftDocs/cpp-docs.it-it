---
title: "static_assert | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "C2338"
  - "static_assert_cpp"
  - "static_assert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asserzioni [C++], static_assert"
  - "parole chiave C++, static_assert"
  - "C2338"
  - "static_assert"
ms.assetid: 28dd3668-e78c-4de8-ba68-552084743426
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# static_assert
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica un'asserzione software in fase di compilazione.  Se l'espressione costante specificata è `false`, nel compilatore viene visualizzato il messaggio specificato e la compilazione ha esito negativo con l'errore C2338. In caso contrario, la dichiarazione non ha effetto.  
  
## Sintassi  
  
```  
static_assert(   
    constant-expression,   
    string-literal   
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`constant-expression`|Espressione costante integrale che può essere convertita in un valore booleano.<br /><br /> Se l'espressione valutata restituisce zero \(false\), viene visualizzato il parametro `string-literal` e la compilazione ha esito negativo con un errore.  Se l'espressione restituisce un valore diverso da zero \(true\), la dichiarazione `static_assert` non ha effetto.|  
|`string-literal`|Messaggio visualizzato se il parametro `constant-expression` è zero.  Il messaggio è una stringa di caratteri del [set di caratteri di base](../c-language/ascii-character-set.md) del compilatore, ovvero non [caratteri multibyte o wide](../c-language/multibyte-and-wide-characters.md).|  
  
## Note  
 Il parametro `constant-expression` di una dichiarazione `static_assert` rappresenta un'*asserzione software*.  Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma.  Se la condizione è true, la dichiarazione `static_assert` non ha effetto.  Se la condizione è false, l'asserzione ha esito negativo, il compilatore visualizza il messaggio nel parametro `string-literal` e la compilazione ha esito negativo con un errore.  
  
 La dichiarazione `static_assert` verifica un'asserzione software in fase di compilazione.  Al contrario, la macro [Macro assert, \_assert, \_wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) esegue il test di un'asserzione software in fase di esecuzione e comporta un impatto a livello di spazio o tempo in fase di esecuzione.  La dichiarazione `static_assert` è particolarmente utile per i modelli di debug perché gli argomenti di modello possono essere inclusi nel parametro `constant-expression`.  
  
 Il compilatore esamina la dichiarazione `static_assert` per gli errori di sintassi quando viene rilevata la dichiarazione.  Il compilatore restituisce immediatamente il parametro `constant-expression` se non dipende da un parametro di modello.  In caso contrario, il compilatore restituisce il parametro `constant-expression` quando viene creata un'istanza del modello.  Di conseguenza, il compilatore potrebbe generare un messaggio di diagnostica una volta quando la dichiarazione viene rilevata e nuovamente quando viene creata un'istanza del modello.  
  
 È possibile utilizzare la parola chiave `static_assert` nell'ambito di uno spazio dei nomi, di una classe o di un blocco. La parola chiave `static_assert` è tecnicamente una dichiarazione, anche se non introduce il nuovo nome nel programma, perché può essere utilizzata nell'ambito dello spazio dei nomi.  
  
## Descrizione  
 Nell'esempio seguente la dichiarazione `static_assert` ha come ambito quello dello spazio dei nomi.  Poiché il compilatore riconosce la dimensione di tipo `void *`, l'espressione viene valutata immediatamente.  
  
## Esempio  
  
```  
static_assert(sizeof(void *) == 4, "64-bit code generation is not supported.");  
```  
  
## Descrizione  
 Nell'esempio riportato di seguito la dichiarazione `static_assert` ha come ambito quello della classe.  La dichiarazione `static_assert` verifica che un parametro di modello sia un tipo di *dati non aggiornati*.  Il compilatore esamina la dichiarazione `static_assert` quando viene dichiarata, ma non restituisce il parametro `constant-expression` fino a che non viene creata un'istanza del modello di classe `basic_string` in `main()`.  
  
## Esempio  
  
```  
#include <type_traits>  
#include <iosfwd>  
namespace std {  
template <class CharT, class Traits = std::char_traits<CharT> >  
class basic_string {  
    static_assert(tr1::is_pod<CharT>::value,  
                  "Template argument CharT must be a POD type in class template basic_string");  
    // ...  
    };  
}  
struct NonPOD {  
    NonPOD(const NonPOD &) {}  
    virtual ~NonPOD() {}  
};  
int main()  
{  
    std::basic_string<char> bs;  
}  
```  
  
## Descrizione  
 Nell'esempio seguente la dichiarazione `static_assert` ha come ambito quello del blocco.  La dichiarazione `static_assert` verifica che la dimensione della struttura VMPage sia uguale alla dimensione di pagina della memoria virtuale del sistema.  
  
## Esempio  
  
```  
#include <sys/param.h> // defines PAGESIZE  
class VMMClient {  
public:  
    struct VMPage { // ...   
           };  
    int check_pagesize() {  
    static_assert(sizeof(VMPage) == PAGESIZE,  
        "Struct VMPage must be the same size as a system virtual memory page.");  
    // ...  
    }  
// ...  
};  
```  
  
## Vedere anche  
 [Asserzione e messaggi forniti dall'utente \(C\+\+\)](../cpp/assertion-and-user-supplied-messages-cpp.md)   
 [Direttiva \#error](../preprocessor/hash-error-directive-c-cpp.md)   
 [Macro assert, \_assert, \_wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)   
 [Modelli](../cpp/templates-cpp.md)   
 [Set di caratteri ASCII](../c-language/ascii-character-set.md)   
 [Dichiarazioni](../misc/declarations.md)