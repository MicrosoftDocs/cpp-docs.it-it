---
description: 'Altre informazioni su: errore del compilatore C2393'
title: Errore del compilatore C2393
ms.date: 11/04/2016
f1_keywords:
- C2393
helpviewer_keywords:
- C2393
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
ms.openlocfilehash: 7cf1b333afac9f976bb4bf38ce769e6982255959
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318988"
---
# <a name="compiler-error-c2393"></a>Errore del compilatore C2393

> '*Symbol*': non è possibile allocare il simbolo per dominio di applicazione nel segmento '*Segment*'

## <a name="remarks"></a>Commenti

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

L'uso di variabili [AppDomain](../../cpp/appdomain.md) implica la compilazione con **/CLR: pure** o **/CLR: safe** e un'immagine sicura o pura non può contenere segmenti di dati.

Per ulteriori informazioni, vedere [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2393. Per risolvere questo problema, non creare un segmento di dati.

```cpp
// C2393.cpp
// compile with: /clr:pure /c
#pragma data_seg("myseg")
int n = 0;   // C2393
```
