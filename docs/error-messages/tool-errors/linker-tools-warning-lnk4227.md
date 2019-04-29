---
title: Avviso degli strumenti del linker LNK4227
ms.date: 11/04/2016
f1_keywords:
- LNK4227
helpviewer_keywords:
- LNK4227
ms.assetid: 941a0414-9964-4e02-8487-f9daa42ef7f9
ms.openlocfilehash: fb657719c69445ce23d36ccf04ac4a14db0955e4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62352742"
---
# <a name="linker-tools-warning-lnk4227"></a>Avviso degli strumenti del linker LNK4227

> avviso di operazione dei metadati (*HRESULT*): *messaggio_avviso*

Il linker ha rilevato differenze nei metadati durante il merge:

- Uno o più assembly a cui si fa riferimento all'assembly in fase di compilazione.

- Uno o più file di codice sorgente in una compilazione.

Ad esempio, può essere causato LNK4227 se si dispongono di due funzioni globali con lo stesso nome ma con le informazioni sui parametri dichiarati in modo diverso (vale a dire, le dichiarazioni non sono coerenti in tutti i moduli). Usare ildasm.exe /TEXT /METADATA *object_file* su ogni file obj per vedere come i tipi sono diversi.

LNK4227 viene inoltre utilizzato per segnalare i problemi che hanno origine con un altro strumento. Cercare il messaggio di avviso per ulteriori informazioni.

Per risolvere l'avviso, è necessario correggere i problemi relativi ai metadati.

## <a name="example"></a>Esempio

LNK4227 viene generato quando un assembly di riferimento è stato firmato in modo diverso rispetto all'assembly che fa riferimento a essa.

L'esempio seguente genera l'errore LNK4227:

```cpp
// LNK4227.cpp
// compile with: /clr
using namespace System::Reflection;

[assembly:AssemblyDelaySignAttribute(false)];

int main() {}
```

E poi

```cpp
// LNK4227b.cpp
// compile with: /clr LNK4227.cpp /FeLNK4227b.exe
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;

[assembly:AssemblyDelaySignAttribute(true)];
// Try the following line instead
// [assembly:AssemblyDelaySignAttribute(false)];

ref class MyClass
{
};
```

## <a name="example"></a>Esempio

LNK4227 può anche essere generato quando vengono passati i numeri di versione in formato non corretto per gli attributi dell'assembly.  Il ' *' notation è specifico per il `AssemblyVersionAttribute`.  Per risolvere questo problema, usare solo numeri negli attributi di versione diverso da `AssemblyVersionAttribute`.

L'esempio seguente genera l'errore LNK4227:

```cpp
// LNK4227e.cpp
// compile with: /clr /LD /W1
using namespace System::Reflection;
[assembly:AssemblyVersionAttribute("2.3.*")];   // OK
[assembly:AssemblyFileVersionAttribute("2.3.*")];   // LNK4227
// try the following line instead
// [assembly:AssemblyFileVersionAttribute("2.3")];
```