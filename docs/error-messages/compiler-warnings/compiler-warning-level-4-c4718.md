---
title: Avviso del compilatore (livello 4) C4718
ms.date: 11/04/2016
f1_keywords:
- C4718
helpviewer_keywords:
- C4718
ms.assetid: 29507f8a-b024-42c1-a3b8-f35d1f2641f3
ms.openlocfilehash: c313e26af5f5b17db9c7d001a705ff7211461c2b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573691"
---
# <a name="compiler-warning-level-4-c4718"></a>Avviso del compilatore (livello 4) C4718

'function call': la chiamata ricorsiva non ha effetti collaterali e verrà eliminata

Una funzione contiene una chiamata ricorsiva, ma non ha altri effetti collaterali. Una chiamata a questa funzione viene eliminata. Questo non incide sulla correttezza del programma, ma sul comportamento. L'esistenza della chiamata potrebbe determinare un'eccezione di overflow dello stack in fase di esecuzione, eventualità che viene eliminata con la rimozione della chiamata.