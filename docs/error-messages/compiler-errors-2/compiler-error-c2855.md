---
description: 'Altre informazioni su: errore del compilatore C2855'
title: Errore del compilatore C2855
ms.date: 02/16/2021
f1_keywords:
- C2855
helpviewer_keywords:
- C2855
ms.openlocfilehash: cc26dbf92ea385ee05681e5fab8b5c4257c2b525
ms.sourcegitcommit: e99db7c3b5f25ece0e152165066c926751a7c2ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2021
ms.locfileid: "100643547"
---
# <a name="compiler-error-c2855"></a>Errore del compilatore C2855

> opzione della riga di comando '*Option*' non coerente con l'intestazione precompilata

Questo errore si verifica quando un'opzione della riga di comando differisce dalle opzioni utilizzate per creare l'intestazione precompilata.

## <a name="remarks"></a>Commenti

L'errore C2855 può verificarsi quando si crea una compilazione incrementale dopo la modifica di un'opzione del compilatore. Può verificarsi anche se si impostano opzioni specifiche del compilatore per i singoli file di origine.

Per correggere l'errore, rigenerare l'intestazione precompilata utilizzando l'opzione della riga di comando specificata. Per rigenerare l'intestazione precompilata, compilare il file di origine associato. Ad esempio, i progetti creati da un modello di Visual Studio in genere creano un file di origine denominato *`pch.cpp`* per generare l'intestazione precompilata. Nelle versioni precedenti di Visual Studio, questo file è denominato *`stdafx.cpp`* . In altri progetti, il file di origine da ricompilare è quello compilato usando l'opzione del compilatore [ `/Yc` (Crea file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md) . Si consiglia di ricompilare l'intero progetto dopo avere apportato una modifica all'intestazione precompilata.

## <a name="see-also"></a>Vedi anche

[`/Y` (Intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)\
[File di intestazione precompilati](../../build/creating-precompiled-header-files.md)
