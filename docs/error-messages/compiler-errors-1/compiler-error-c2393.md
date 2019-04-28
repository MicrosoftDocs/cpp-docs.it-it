---
title: Errore del compilatore C2393
ms.date: 11/04/2016
f1_keywords:
- C2393
helpviewer_keywords:
- C2393
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
ms.openlocfilehash: 39ca693aed3f08e7b2df3d687f94d93384393f23
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62302397"
---
# <a name="compiler-error-c2393"></a>Errore del compilatore C2393

> «*simbolo*': Impossibile allocare il simbolo per dominio di applicazione nel segmento '*segmento*»

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

L'uso di [appdomain](../../cpp/appdomain.md) variabili implica che si esegue la compilazione con **/clr: pure** oppure **/CLR: safe**, e un'immagine safe o pura non può contenere segmenti di dati.

Visualizzare [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2393. Per risolvere questo problema, non creare un segmento di dati.

```cpp
// C2393.cpp
// compile with: /clr:pure /c
#pragma data_seg("myseg")
int n = 0;   // C2393
```