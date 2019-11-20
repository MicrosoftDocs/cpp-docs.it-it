---
title: Avviso del compilatore (livello 3) C4792
ms.date: 11/04/2016
f1_keywords:
- C4792
helpviewer_keywords:
- C4792
ms.assetid: c047ce69-a622-44e1-9425-d41aa9261c61
ms.openlocfilehash: 84a8a8bbb08ac97fe87d63d1ea44587790f87d92
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189335"
---
# <a name="compiler-warning-level-3-c4792"></a>Avviso del compilatore (livello 3) C4792

la funzione 'function' è stata dichiarata utilizzando sysimport e vi si è fatto riferimento dal codice nativo; richiesto collegamento alla libreria di importazione

Una funzione nativa che è stata importata nel programma con DllImport è stata chiamata da una funzione non gestita. È quindi necessario un collegamento alla libreria di importazione per la DLL.

Questo avviso non può essere risolto nel codice o modificando la modalità di compilazione. Usare il pragma [warning](../../preprocessor/warning.md) per disabilitare l'avviso.

L'esempio seguente genera l'errore C4792:

```cpp
// C4792.cpp
// compile with: /clr /W3
// C4792 expected
using namespace System::Runtime::InteropServices;
[DllImport("msvcrt")]
extern "C" int __cdecl puts(const char *);
int main() {}

// Uncomment the following line to resolve.
// #pragma warning(disable : 4792)
#pragma unmanaged
void func(void){
   puts("test");
}
```