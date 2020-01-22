---
title: /Zc:inline (rimuovere COMDAT senza riferimenti)
ms.date: 09/05/2019
f1_keywords:
- /Zc:inline
- VC.Project.VCCLCompilerTool.RemoveUnreferencedCodeData
helpviewer_keywords:
- -Zc compiler options (C++)
- /Zc compiler options (C++)
- Zc compiler options (C++)
- /Zc:inline
ms.assetid: a4c94224-1d73-4bea-a9d5-4fa73dc924df
ms.openlocfilehash: 42791b2e337fb9a9724a165145e757152b8d679d
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76518244"
---
# <a name="zcinline-remove-unreferenced-comdat"></a>/Zc:inline (rimuovere COMDAT senza riferimenti)

Rimuove le funzioni o i dati non a cui viene fatto riferimento COMDAT o che dispongono solo di collegamento interno. In **/Zc: inline**, il compilatore specifica che le unità di conversione con dati o funzioni inline devono includere anche le relative definizioni.

## <a name="syntax"></a>Sintassi

> **/Zc:inline**[ **-** ]

## <a name="remarks"></a>Note

Quando **/Zc: inline** viene specificato, il compilatore non emette informazioni sui simboli per le funzioni o i dati COMDAT senza riferimenti. Oppure, per i dati o le funzioni che dispongono solo di collegamento interno. Questa ottimizzazione semplifica alcune operazioni eseguite dal linker nelle build di rilascio o quando si specifica l'opzione del linker [/opt: Ref](opt-optimizations.md) . Questa ottimizzazione del compilatore può ridurre significativamente le dimensioni del file con estensione obj e migliorare le velocità del linker. L'opzione del compilatore non è abilitata quando si disabilitano le ottimizzazioni ([/od](od-disable-debug.md)). In alternativa, quando si specifica [/GL (Ottimizzazione intero programma)](gl-whole-program-optimization.md).

Per impostazione predefinita, questa opzione è disattivata ( **/Zc: inline-** ) nelle compilazioni da riga di comando. L'opzione [/permissive-](permissive-standards-conformance.md) non abilita **/Zc: inline**. Nei progetti MSBuild l'opzione è impostata dalle proprietà di **configurazione** > lingua **C/C++**  >  > **rimuovere il codice e** la proprietà dati senza riferimenti, che è impostata su **Sì** per impostazione predefinita.

Se viene specificato **/Zc: inline** , il compilatore impone il requisito di c++ 11 in cui tutte le funzioni dichiarate `inline` devono disporre di una definizione disponibile nella stessa unità di conversione se vengono usate. Quando l'opzione non è specificata, il compilatore Microsoft consente il codice non conforme che richiama le funzioni dichiarate `inline` anche se non è visibile alcuna definizione. Per altre informazioni, vedere lo standard C++11 nelle sezioni 3.2 e 7.1.2. Questa opzione del compilatore è stata introdotta in Visual Studio 2013 Update 2.

Per utilizzare l'opzione **/Zc: inline** , aggiornare il codice non conforme.

In questo esempio viene illustrato come l'utilizzo non conforme di una dichiarazione di funzione inline senza una definizione viene ancora compilato e collegato quando viene utilizzata l'opzione predefinita **/Zc: inline** :

```cpp
// example.h
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp
#pragma once

class Example {
public:
   inline void inline_call(); // declared but not defined inline
   void normal_call();
   Example() {};
};
```

```cpp
// example.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp
#include <stdio.h>
#include "example.h"

void Example::inline_call() {
   printf("inline_call was called.\n");
}

void Example::normal_call() {
   printf("normal_call was called.\n");
   inline_call(); // with /Zc:inline-, inline_call forced into .obj file
}
```

```cpp
// zcinline.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp
#include "example.h"

int main() {
   Example example;
   example.inline_call(); // normal call when definition unavailable
}
```

Quando **/Zc: inline** è abilitato, lo stesso codice causa un errore [LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md) , perché il compilatore non genera un corpo di codice non inline per `Example::inline_call` in example. obj. In questo modo, la chiamata non inline in `main` di fare riferimento a un simbolo esterno non definito.

Per risolvere questo errore è possibile rimuovere la parola chiave `inline` dalla dichiarazione di `Example::inline_call`, spostare la definizione di `Example::inline_call` nel file di intestazione o spostare l'implementazione di `Example` in main.cpp. L'esempio seguente sposta la definizione nel file di intestazione, in cui è visibile a qualsiasi chiamante che include l'intestazione.

```cpp
// example2.h
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp
#pragma once
#include <stdio.h>

class Example2 {
public:
   inline void inline_call() {
      printf("inline_call was called.\n");
   }
   void normal_call();
   Example2() {};
};
```

```cpp
// example2.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp
#include "example2.h"

void Example2::normal_call() {
   printf("normal_call was called.\n");
   inline_call();
}
```

```cpp
// zcinline2.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp
#include "example2.h"

int main() {
   Example2 example2;
   example2.inline_call(); // normal call when definition unavailable
}
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare le **proprietà di configurazione** > pagina delle proprietà **lingua** **CC++ /**  > .

1. Modificare la proprietà **Rimuovi codice e dati senza riferimenti** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)<br/>
