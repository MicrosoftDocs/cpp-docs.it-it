---
description: 'Altre informazioni su: errore del compilatore C3859'
title: Errore del compilatore C3859
ms.date: 03/08/2019
f1_keywords:
- C3859
helpviewer_keywords:
- C3859
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
ms.openlocfilehash: 25c05425072cda6924d90f08c9aeff7446a4e85b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336103"
---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859

> è stato superato l'intervallo di memoria virtuale per PCH; ricompilare con un'opzione della riga di comando di '-ZM *value*' o versione successiva

La memoria virtuale allocata per l'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta provando a inserire. A partire da Visual Studio 2015, la raccomandazione **/ZM** è significativa solo quando si usa la `#pragma hdrstop` direttiva. In altri casi, si tratta di un errore non corretto che indica problemi di utilizzo della memoria virtuale di Windows.

Se l'intestazione precompilata usa una `#pragma hdrstop` direttiva, usare il flag del compilatore **/ZM** per specificare un valore più grande per il file di intestazione precompilata. In caso contrario, provare a ridurre il numero di processi di compilazione paralleli nella compilazione. Per altre informazioni, vedere [/ZM (specifica il limite di allocazione della memoria per l'intestazione precompilata)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).
