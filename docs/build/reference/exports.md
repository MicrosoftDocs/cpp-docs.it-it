---
title: EXPORTS
ms.date: 09/07/2018
f1_keywords:
- EXPORTS
helpviewer_keywords:
- EXPORTS .def file statement
ms.assetid: dbcd7579-b855-44c4-bd27-931e157657f7
ms.openlocfilehash: 9ede0d3b53c975298dea3d1331bc0fb00ac246b2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328249"
---
# <a name="exports"></a>EXPORTS

Introduce una sezione di una o più definizioni di esportazione che specificano i nomi o gli ordinali esportati di funzioni o dati. Ogni definizione deve essere riportata in una riga separata.

```DEF
EXPORTS
   definition
```

## <a name="remarks"></a>Osservazioni

La prima *definizione* può trovarsi `EXPORTS` sulla stessa riga della parola chiave o in una riga successiva. Il file con estensione DEF può contenere una o più istruzioni `EXPORTS`.

La sintassi per una *definizione* di esportazione è:

> *entryname*\[__=__*internal_name*|*other_module.exported_name* \[ **\@**] _ordinale_ \[ **NONAME**] ] \[ \[ **PRIVATE**] \[ **DATI**] ]

*entryname* è il nome della funzione o della variabile che si desidera esportare. È un'operazione obbligatoria. Se il nome esportato è diverso dal nome nella DLL, specificare il nome dell'esportazione nella DLL utilizzando *internal_name*. Se ad esempio la DLL esporta una funzione `func1` e si vuole che i chiamanti la usino come `func2`, specificare:

```DEF
EXPORTS
   func2=func1
```

Se il nome esportato proviene da un altro modulo, specificare il nome dell'esportazione nella DLL utilizzando *other_module.exported_name*. Se ad esempio la DLL esporta una funzione `other_module.func1` e si vuole che i chiamanti la usino come `func2`, specificare:

```DEF
EXPORTS
   func2=other_module.func1
```

Se il nome esportato proviene da un altro modulo esportato in base al numero ordinale, specificare l'ordinale dell'esportazione nella DLL utilizzando *other_module*. __#__ *ordinale*. Ad esempio, se la DLL esporta una funzione dall'altro modulo in cui è ordinale 42 e si desidera che i chiamanti la utilizzino come `func2`, è necessario specificare:

```DEF
EXPORTS
   func2=other_module.#42
```

Poiché il compilatore MSVC utilizza la decorazione dei nomi *internal_name* per le funzioni di C `extern "C"` , è necessario utilizzare il nome decorato internal_name o definire le funzioni esportate utilizzando nel codice sorgente. Il compilatore decora inoltre le funzioni C che\_utilizzano la convenzione di chiamata\@ [__stdcall](../../cpp/stdcall.md) con un prefisso di sottolineatura ( ) e un suffisso composto dal simbolo di chiocciola ( ) seguito dal numero di byte (in decimal) nell'elenco di argomenti.

Per trovare i nomi decorati prodotti dal compilatore, utilizzare lo strumento [DUMPBIN](dumpbin-reference.md) o l'opzione [/MAP](map-generate-mapfile.md) del linker. I nomi decorati sono specifici del compilatore. Se si esportano i nomi decorati nel file .DEF, gli eseguibili che si collegano alla DLL devono essere anch'essi compilati usando la stessa versione del compilatore. Questo garantisce che i nomi decorati nel chiamante corrispondano ai nomi esportati nel file .DEF.

È possibile \@utilizzare *ordinale* per specificare che un numero, e non il nome della funzione, deve essere inserito nella tabella di esportazione della DLL. Molte DLL Windows esportano ordinali per supportare il codice legacy. In precedenza, era pratica comune usare ordinali nel codice Windows a 16 bit, perché ciò può aiutare a ridurre le dimensioni di una DLL. Non è consigliabile esportare le funzioni per ordinale a meno che i client della DLL non ne abbiano bisogno per il supporto legacy. Dato che il file .LIB file conterrà il mapping tra l'ordinale e la funzione, è possibile usare il nome della funzione come si farebbe normalmente nei progetti che usano la DLL.

Utilizzando la parola chiave **NONAME** facoltativa, è possibile esportare solo per ordinale e ridurre le dimensioni della tabella di esportazione nella DLL risultante. Tuttavia, se si desidera utilizzare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) nella DLL, è necessario conoscere l'ordinale perché il nome non sarà valido.

La parola chiave facoltativa **PRIVATE** impedisce che *entryname* venga incluso nella libreria di importazione generata da LINK. Questa non ha alcun effetto sull'esportazione nell'immagine, anch'essa generata da LINK.

La parola chiave facoltativa **DATA** specifica che un'esportazione è dati, non codice. L'esempio seguente illustra come esportare una variabile dati denominata `exported_global`:

```DEF
EXPORTS
   exported_global DATA
```

Vi sono quattro metodi per esportare una definizione, elencati di seguito in ordine di preferenza.

1. La [parola chiave __declspec(dllexport)](../../cpp/dllexport-dllimport.md) nel codice sorgente

1. Un'istruzione `EXPORTS` in un file .DEF

1. Una specifica [/EXPORT](export-exports-a-function.md) in un comando LINK

1. Direttiva [comment](../../preprocessor/comment-c-cpp.md) nel codice sorgente, `#pragma comment(linker, "/export: definition ")`nel formato . Nell'esempio seguente viene illustrata una direttiva comment #pragma prima di una dichiarazione di funzione, dove `PlainFuncName` è il nome non decorato ed `_PlainFuncName@4` è il nome decorato della funzione:

    ```cpp
    #pragma comment(linker, "/export:PlainFuncName=_PlainFuncName@4")
    BOOL CALLBACK PlainFuncName( Things * lpParams)
    ```

Il #pragma direttiva è utile se è necessario esportare un nome di funzione non decorata e hanno esportazioni diverse a seconda della configurazione di compilazione (ad esempio, nelle compilazioni a 32 bit o a 64 bit).

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

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](rules-for-module-definition-statements.md)
