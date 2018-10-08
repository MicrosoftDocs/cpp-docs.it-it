---
title: ESPORTAZIONI | Microsoft Docs
ms.custom: ''
ms.date: 09/07/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- EXPORTS
dev_langs:
- C++
helpviewer_keywords:
- EXPORTS .def file statement
ms.assetid: dbcd7579-b855-44c4-bd27-931e157657f7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6bf350b0a129c642678fc6af1bac7d35633fe909
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860979"
---
# <a name="exports"></a>EXPORTS

Introduce una sezione di una o più definizioni di esportazione che specificano i nomi o gli ordinali esportati di funzioni o dati. Ogni definizione deve essere riportata in una riga separata.

```DEF
EXPORTS
   definition
```

## <a name="remarks"></a>Note

Il primo *definition* può essere sulla stessa riga come la `EXPORTS` parola chiave o in una riga successiva. Il file con estensione DEF può contenere una o più istruzioni `EXPORTS`.

La sintassi per un'esportazione *definizione* è:

> *entryname*\[__=__*internal_name*|*other_module.exported_name*] \[ **\@** _ordinale_ \[ **NONAME**]] \[ \[ **privato**] | \[ **Dati**]]

*entryname* è il nome di funzione o variabile che si desidera esportare. ed è obbligatorio. Se il nome da esportare è diverso dal nome nella DLL, specificare il nome dell'esportazione nella DLL usando *internal_name*. Se ad esempio la DLL esporta una funzione `func1` e si vuole che i chiamanti la usino come `func2`, specificare:

```DEF
EXPORTS
   func2=func1
```

Se il nome che si esporta proviene da un altro modulo, specificare il nome dell'esportazione nella DLL usando *other_module.exported_name*. Se ad esempio la DLL esporta una funzione `other_module.func1` e si vuole che i chiamanti la usino come `func2`, specificare:

```DEF
EXPORTS
   func2=other_module.func1
```

Se il nome che si esporta proviene da un altro modulo che esporta base al numero ordinale, specificare l'esportazione della ordinale nella DLL utilizzando *other_module*.__#__ *ordinale*. Ad esempio, se la DLL esporta una funzione del modulo in cui è 42 ordinale e si vuole che i chiamanti da utilizzare come `func2`, si specificherà:

```DEF
EXPORTS
   func2=other_module.#42
```

Poiché il compilatore Visual C++ Usa la decorazione per le funzioni C++, è necessario usare il nome decorato *internal_name* definire le funzioni esportate tramite `extern "C"` nel codice sorgente. Il compilatore decora anche le funzioni C che usano il [stdcall](../../cpp/stdcall.md) con un carattere di sottolineatura convenzione di chiamata (\_) prefisso e un suffisso composto il simbolo di chiocciola (\@) seguito dal numero di byte (in decimali) nel elenco di argomenti.

Per trovare i nomi decorati creati dal compilatore, usare il [DUMPBIN](../../build/reference/dumpbin-reference.md) dello strumento o il linker [/Map](../../build/reference/map-generate-mapfile.md) opzione. I nomi decorati sono specifici del compilatore. Se si esportano i nomi decorati nel file .DEF, gli eseguibili che si collegano alla DLL devono essere anch'essi compilati usando la stessa versione del compilatore. Questo garantisce che i nomi decorati nel chiamante corrispondano ai nomi esportati nel file .DEF.

È possibile usare \@ *ordinale* per specificare che un numero e non il nome della funzione, esamina la tabella di esportazione DLL. Molte DLL Windows esportano ordinali per supportare il codice legacy. In precedenza, era pratica comune usare ordinali nel codice Windows a 16 bit, perché ciò può aiutare a ridurre le dimensioni di una DLL. Si sconsiglia di esportare funzioni in base a ordinali a meno che i destinatari della DLL non necessitino di tale funzione a scopo di supporto della legacy. Dato che il file .LIB file conterrà il mapping tra l'ordinale e la funzione, è possibile usare il nome della funzione come si farebbe normalmente nei progetti che usano la DLL.

Usando l'opzione facoltativa **NONAME** (parola chiave), è possibile esportare solo per ordinali e ridurre le dimensioni della tabella di esportazione nella DLL risultante. Tuttavia, se si desidera utilizzare [GetProcAddress](https://msdn.microsoft.com/library/windows/desktop/ms683212.aspx) nella DLL, è necessario conoscere il numero ordinale perché il nome non è valido.

La parola chiave facoltativa **privati** impedisce *entryname* siano incluse nella libreria di importazione generata da LINK. Questa non ha alcun effetto sull'esportazione nell'immagine, anch'essa generata da LINK.

La parola chiave facoltativa **dati** specifica che un'esportazione dei dati, non nel codice. L'esempio seguente illustra come esportare una variabile dati denominata `exported_global`:

```DEF
EXPORTS
   exported_global DATA
```

Vi sono quattro metodi per esportare una definizione, elencati di seguito in ordine di preferenza.

1. Il [dllexport](../../cpp/dllexport-dllimport.md) parola chiave nel codice sorgente

1. Un'istruzione `EXPORTS` in un file .DEF

1. Un' [/Export](../../build/reference/export-exports-a-function.md) specifica in un comando LINK

1. Oggetto [commento](../../preprocessor/comment-c-cpp.md) direttiva nel codice sorgente, del form `#pragma comment(linker, "/export: definition ")`. L'esempio seguente mostra una direttiva di commento #pragma prima di una dichiarazione di funzione, in cui `PlainFuncName` è il nome non decorato, e `_PlainFuncName@4` è il nome decorato della funzione:

    ```cpp
    #pragma comment(linker, "/export:PlainFuncName=_PlainFuncName@4")
    BOOL CALLBACK PlainFuncName( Things * lpParams)
    ```

La direttiva #pragma è utile se è necessario esportare un nome di funzione non decorati e avere esportazioni diversi a seconda della configurazione di compilazione (ad esempio, in compilazioni a 32 o 64 bit).

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

[Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)
