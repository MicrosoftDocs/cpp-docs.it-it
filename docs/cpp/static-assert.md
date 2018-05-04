---
title: static_assert | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- static_assert_cpp
dev_langs:
- C++
helpviewer_keywords:
- C++ keywords, static_assert
- C2338
- assertions [C++], static_assert
- static_assert
ms.assetid: 28dd3668-e78c-4de8-ba68-552084743426
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 47046090da45d963cc0005f47e2bea680ad17795
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="staticassert"></a>static_assert
Verifica un'asserzione software in fase di compilazione. Se l'espressione costante specificata è `false`, il compilatore Visualizza il messaggio specificato, se presente e la compilazione non riesce con l'errore C2338; in caso contrario, la dichiarazione non ha alcun effetto.  
  
## <a name="syntax"></a>Sintassi  
  
```   
static_assert( constant-expression, string-literal );  

**Visual Studio 2017 and later:**
static_assert( constant-expression ); 
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`constant-expression`|Espressione costante integrale che può essere convertita in un valore booleano.<br /><br /> Se l'espressione valutata restituisce zero (false), viene visualizzato il parametro `string-literal` e la compilazione ha esito negativo con un errore. Se l'espressione restituisce un valore diverso da zero (true), la dichiarazione `static_assert` non ha effetto.|  
|`string-literal`|Messaggio visualizzato se il parametro `constant-expression` è zero. Il messaggio è una stringa di caratteri nel [set di caratteri di base](../c-language/ascii-character-set.md) del compilatore; ovvero, non [caratteri multibyte o wide](../c-language/multibyte-and-wide-characters.md).|  
  
## <a name="remarks"></a>Note  
 Il `constant-expression` parametro di un `static_assert` dichiarazione rappresenta un *asserzione software*. Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma. Se la condizione è true, la dichiarazione `static_assert` non ha effetto. Se la condizione è false, l'asserzione ha esito negativo, il compilatore visualizza il messaggio nel parametro `string-literal` e la compilazione ha esito negativo con un errore. In Visual Studio 2017 e versioni successive, il parametro di valore letterale stringa è facoltativo. 
  
 La dichiarazione `static_assert` verifica un'asserzione software in fase di compilazione. Al contrario, il [assert (macro), Assert, wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro test di un'asserzione software in fase di esecuzione e comporta un costo in fase di esecuzione nel tempo o di spazio. La dichiarazione `static_assert` è particolarmente utile per i modelli di debug perché gli argomenti di modello possono essere inclusi nel parametro `constant-expression`.  
  
 Il compilatore esamina la dichiarazione `static_assert` per gli errori di sintassi quando viene rilevata la dichiarazione. Il compilatore restituisce immediatamente il parametro `constant-expression` se non dipende da un parametro di modello. In caso contrario, il compilatore restituisce il parametro `constant-expression` quando viene creata un'istanza del modello. Di conseguenza, il compilatore potrebbe generare un messaggio di diagnostica una volta quando la dichiarazione viene rilevata e nuovamente quando viene creata un'istanza del modello.  
  
 È possibile utilizzare la parola chiave `static_assert` nell'ambito di uno spazio dei nomi, di una classe o di un blocco. La parola chiave `static_assert` è tecnicamente una dichiarazione, anche se non introduce il nuovo nome nel programma, perché può essere utilizzata nell'ambito dello spazio dei nomi.  
  
## <a name="description"></a>Descrizione  
 Nell'esempio seguente la dichiarazione `static_assert` ha come ambito quello dello spazio dei nomi. Poiché il compilatore riconosce la dimensione di tipo `void *`, l'espressione viene valutata immediatamente.  
  
## <a name="example"></a>Esempio  
  
```  
static_assert(sizeof(void *) == 4, "64-bit code generation is not supported.");  
```  
  
## <a name="description"></a>Descrizione  
 Nell'esempio riportato di seguito la dichiarazione `static_assert` ha come ambito quello della classe. Il `static_assert` verifica che un parametro di modello è un *dati non aggiornati* tipo (POD). Il compilatore esamina la dichiarazione `static_assert` quando viene dichiarata, ma non restituisce il parametro `constant-expression` fino a che non viene creata un'istanza del modello di classe `basic_string` in `main()`.  
  
## <a name="example"></a>Esempio  
  
```  
#include <type_traits>  
#include <iosfwd>  
namespace std {  
template <class CharT, class Traits = std::char_traits<CharT> >  
class basic_string {  
    static_assert(std::is_pod<CharT>::value,  
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
  
## <a name="description"></a>Descrizione  
 Nell'esempio seguente la dichiarazione `static_assert` ha come ambito quello del blocco. La dichiarazione `static_assert` verifica che la dimensione della struttura VMPage sia uguale alla dimensione di pagina della memoria virtuale del sistema.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Asserzione e messaggi forniti dall'utente (C++)](../cpp/assertion-and-user-supplied-messages-cpp.md)   
 [#error (direttiva) (C/C++)](../preprocessor/hash-error-directive-c-cpp.md)   
 [Macro assert, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)   
 [Modelli](../cpp/templates-cpp.md)   
 [Set di caratteri ASCII](../c-language/ascii-character-set.md)   
 [Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)