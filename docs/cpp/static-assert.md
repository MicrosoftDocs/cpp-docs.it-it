---
title: static_assert | Microsoft Docs
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
ms.openlocfilehash: 6fa9b8fb7fe85aca21e90195534f33201bee59fc
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39464934"
---
# <a name="staticassert"></a>static_assert
Verifica un'asserzione software in fase di compilazione. Se l'espressione costante specificata è FALSE, il compilatore Visualizza il messaggio specificato, se presente, e la compilazione ha esito negativo con l'errore C2338; in caso contrario, la dichiarazione non ha effetto.  
  
## <a name="syntax"></a>Sintassi  
  
```   
static_assert( constant-expression, string-literal );  

**Visual Studio 2017 and later:**
static_assert( constant-expression ); 
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*constant-expression*|Espressione costante integrale che può essere convertita in un valore booleano.<br /><br /> Se l'espressione valutata è zero (false), il *valore letterale stringa* parametro viene visualizzato e la compilazione ha esito negativo con un errore. Se l'espressione è diverso da zero (true), il **static_assert** dichiarazione non ha alcun effetto.|  
|*string-literal*|Un messaggio che viene visualizzato se il *espressione costante* parametro è uguale a zero. Il messaggio è una stringa di caratteri nel [set di caratteri di base](../c-language/ascii-character-set.md) del compilatore; ovvero, non [caratteri multibyte o wide](../c-language/multibyte-and-wide-characters.md).|  
  
## <a name="remarks"></a>Note  
 Il *espressione costante* parametro di un **static_assert** dichiarazione rappresenta una *asserzione software*. Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma. Se la condizione è true, il **static_assert** dichiarazione non ha alcun effetto. Se la condizione è false, l'asserzione non riesce, il compilatore Visualizza il messaggio nel *valore letterale stringa* parametro e la compilazione ha esito negativo con un errore. In Visual Studio 2017 e versioni successive, il parametro di valore letterale stringa è facoltativo. 
  
 Il **static_assert** consente di testare un'asserzione software in fase di compilazione. Al contrario, il [Macro assert, Assert, wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro testare un'asserzione software in fase di esecuzione e comporta un costo di fase di esecuzione nel tempo o di spazio. Il **static_assert** dichiarazione è particolarmente utile per il debug di modelli perché argomenti di modello possono essere inclusi nel *espressione costante* parametro.  
  
 Il compilatore esamina la **static_assert** dichiarazione per gli errori di sintassi quando viene rilevata la dichiarazione. Il compilatore restituisce il *espressione costante* parametro immediatamente se non fa affidamento su un parametro di modello. In caso contrario, il compilatore restituisce il *espressione costante* parametro quando viene creata un'istanza di modello. Di conseguenza, il compilatore potrebbe generare un messaggio di diagnostica una volta quando la dichiarazione viene rilevata e nuovamente quando viene creata un'istanza del modello.  
  
 È possibile usare la **static_assert** parola chiave nella spazio dei nomi, classe o di ambito del blocco. (Il **static_assert** la parola chiave è tecnicamente una dichiarazione, anche se introduce il nuovo nome nel programma, perché può essere usato nell'ambito dello spazio dei nomi.)  
  
## <a name="description"></a>Descrizione  
 Nell'esempio seguente, il **static_assert** dichiarazione con ambito spazio dei nomi. Poiché il compilatore riconosce la dimensione di tipo `void *`, l'espressione viene valutata immediatamente.  
  
## <a name="example"></a>Esempio  
  
```cpp 
static_assert(sizeof(void *) == 4, "64-bit code generation is not supported.");  
```  
  
## <a name="description"></a>Descrizione  
 Nell'esempio seguente, il **static_assert** dichiarazione con ambito di classe. Il **static_assert** verifica che un parametro di modello sia un *dati non aggiornati* tipo (POD). Il compilatore esamina la **static_assert** dichiarazione quando viene dichiarata, ma non valuta il *espressione costante* parametro finché il `basic_string` viene creata un'istanza di modello di classe in `main()`.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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
 Nell'esempio seguente, il **static_assert** dichiarazione con ambito blocco. Il **static_assert** verifica che la dimensione della struttura VMPage sia uguale a pagesize della memoria virtuale del sistema.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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