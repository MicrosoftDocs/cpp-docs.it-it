---
description: 'Altre informazioni su: esportazioni'
title: EXPORTS
ms.date: 09/07/2018
f1_keywords:
- EXPORTS
helpviewer_keywords:
- EXPORTS .def file statement
ms.assetid: dbcd7579-b855-44c4-bd27-931e157657f7
ms.openlocfilehash: b886f626854012c3cc477fcb11ac74a1e7776299
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192344"
---
# <a name="exports"></a>EXPORTS

Introduce una sezione di una o più definizioni di esportazione che specificano i nomi o gli ordinali esportati di funzioni o dati. Ogni definizione deve essere riportata in una riga separata.

```DEF
EXPORTS
   definition
```

## <a name="remarks"></a>Commenti

La prima *definizione* può essere sulla stessa riga della `EXPORTS` parola chiave o su una riga successiva. Il file con estensione DEF può contenere una o più istruzioni `EXPORTS`.

La sintassi per una *definizione* di esportazione è la seguente:

> *entryname* \[ __=__ *internal_name* | *other_module.exported_name*] \[ **\@** _nome ordinale_ \[ ] \[ ] \[ **Privato**] | \[ **Dati**]]

*entryname* è il nome della funzione o della variabile che si desidera esportare. È un'operazione obbligatoria. Se il nome esportato è diverso dal nome nella DLL, specificare il nome dell'esportazione nella DLL utilizzando *internal_name*. Se ad esempio la DLL esporta una funzione `func1` e si vuole che i chiamanti la usino come `func2`, specificare:

```DEF
EXPORTS
   func2=func1
```

Se il nome esportato è da un altro modulo, specificare il nome dell'esportazione nella DLL usando *other_module. exported_name*. Se ad esempio la DLL esporta una funzione `other_module.func1` e si vuole che i chiamanti la usino come `func2`, specificare:

```DEF
EXPORTS
   func2=other_module.func1
```

Se il nome esportato è da un altro modulo esportato in base al numero ordinale, specificare il numero ordinale dell'esportazione nella DLL utilizzando *other_module*. __#__ *ordinale*. Ad esempio, se la DLL esporta una funzione dall'altro modulo in cui è ordinale 42 e si desidera che i chiamanti lo usino come `func2` , è necessario specificare:

```DEF
EXPORTS
   func2=other_module.#42
```

Poiché il compilatore MSVC usa la decorazione dei nomi per le funzioni C++, è necessario usare il nome decorato *internal_name* o definire le funzioni esportate usando `extern "C"` nel codice sorgente. Il compilatore decora anche le funzioni C che usano la convenzione di chiamata [__stdcall](../../cpp/stdcall.md) con un prefisso di sottolineatura ( \_ ) e un suffisso composto dal simbolo di chiocciola ( \@ ) seguito dal numero di byte (in decimali) nell'elenco di argomenti.

Per trovare i nomi decorati prodotti dal compilatore, usare lo strumento [dumpbin](dumpbin-reference.md) o l'opzione [/Map](map-generate-mapfile.md) del linker. I nomi decorati sono specifici del compilatore. Se si esportano i nomi decorati nel file .DEF, gli eseguibili che si collegano alla DLL devono essere anch'essi compilati usando la stessa versione del compilatore. Questo garantisce che i nomi decorati nel chiamante corrispondano ai nomi esportati nel file .DEF.

È possibile utilizzare \@ *ordinale* per specificare che un numero, e non il nome della funzione, viene inserito nella tabella di esportazione della dll. Molte DLL Windows esportano ordinali per supportare il codice legacy. In precedenza, era pratica comune usare ordinali nel codice Windows a 16 bit, perché ciò può aiutare a ridurre le dimensioni di una DLL. Non è consigliabile esportare le funzioni in base al numero ordinale, a meno che i client della DLL non lo necessitino del supporto legacy. Dato che il file .LIB file conterrà il mapping tra l'ordinale e la funzione, è possibile usare il nome della funzione come si farebbe normalmente nei progetti che usano la DLL.

Utilizzando la parola chiave **NoName** facoltativa, è possibile esportare solo in base al numero ordinale e ridurre le dimensioni della tabella di esportazione nella dll risultante. Tuttavia, se si desidera utilizzare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) sulla dll, è necessario conoscerlo perché il nome non sarà valido.

La parola chiave facoltativa **private** impedisce che *entryname* venga incluso nella libreria di importazione generata dal collegamento. Questa non ha alcun effetto sull'esportazione nell'immagine, anch'essa generata da LINK.

I **dati** facoltativi della parola chiave specificano che un'esportazione è dati, non di codice. L'esempio seguente illustra come esportare una variabile dati denominata `exported_global`:

```DEF
EXPORTS
   exported_global DATA
```

Vi sono quattro metodi per esportare una definizione, elencati di seguito in ordine di preferenza.

1. Parola chiave [__declspec (dllexport)](../../cpp/dllexport-dllimport.md) nel codice sorgente

1. Un'istruzione `EXPORTS` in un file .DEF

1. Una specifica [/Export](export-exports-a-function.md) in un comando di collegamento

1. Una direttiva [Comment](../../preprocessor/comment-c-cpp.md) nel codice sorgente, nel formato `#pragma comment(linker, "/export: definition ")` . Nell'esempio seguente viene illustrata una direttiva comment #pragma prima di una dichiarazione di funzione, dove `PlainFuncName` è il nome non decorato e `_PlainFuncName@4` è il nome decorato della funzione:

    ```cpp
    #pragma comment(linker, "/export:PlainFuncName=_PlainFuncName@4")
    BOOL CALLBACK PlainFuncName( Things * lpParams)
    ```

La direttiva #pragma è utile se è necessario esportare un nome di funzione non decorato e si hanno esportazioni diverse a seconda della configurazione della build, ad esempio in compilazioni a 32 bit o a 64 bit.

Tutti e quattro i metodi possono essere usati nello stesso programma. Quando LINK compila un programma che contiene esportazioni, crea anche una libreria di importazione, a meno che non venga usato un file .EXP nella compilazione.

Di seguito è riportato un esempio di sezione EXPORTS:

```DEF
EXPORTS
   DllCanUnloadNow      @1          PRIVATE
   DllWindowName = WindowName       DATA
   DllGetClassObject    @4 NONAME   PRIVATE
   DllRegisterServer    @7
   DllUnregisterServer
```

Quando si esporta una variabile da una DLL usando un file .DEF, non è necessario specificare `__declspec(dllexport)` nella variabile. In qualsiasi file che usa la DLL, tuttavia, è comunque necessario usare `__declspec(dllimport)` nella dichiarazione dei dati.

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
