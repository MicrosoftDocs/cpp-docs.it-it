---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4718'
title: Avviso del compilatore (livello 4) C4718
ms.date: 11/04/2016
f1_keywords:
- C4718
helpviewer_keywords:
- C4718
ms.assetid: 29507f8a-b024-42c1-a3b8-f35d1f2641f3
ms.openlocfilehash: 9c0a24bbec0ae0cf902d905cc2dcecc492efc44b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330543"
---
# <a name="compiler-warning-level-4-c4718"></a>Avviso del compilatore (livello 4) C4718

'function call': la chiamata ricorsiva non ha effetti collaterali e verrà eliminata

Una funzione contiene una chiamata ricorsiva, ma non ha altri effetti collaterali. Una chiamata a questa funzione viene eliminata. Questo non incide sulla correttezza del programma, ma sul comportamento. L'esistenza della chiamata potrebbe determinare un'eccezione di overflow dello stack in fase di esecuzione, eventualità che viene eliminata con la rimozione della chiamata.
