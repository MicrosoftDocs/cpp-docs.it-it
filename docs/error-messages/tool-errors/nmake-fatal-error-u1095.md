---
title: Errore irreversibile U1095 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1095
dev_langs:
- C++
helpviewer_keywords:
- U1095
ms.assetid: a392582b-06db-4568-9c13-450293a4fbda
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 13c819d18149e61bca71f6a4cb10ea851a2d485d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="nmake-fatal-error-u1095"></a>Errore irreversibile U1095 di NMAKE 
riga di comando espansa 'la riga di comando' troppo lungo  
  
 Dopo l'espansione della macro, la riga di comando specificata supera il limite di lunghezza delle righe di comando per il sistema operativo.  
  
 MS-DOS consente un massimo di 128 caratteri in una riga di comando.  
  
 Se il comando per un programma che può accettare input della riga di comando da un file, modificare il comando e fornire l'input da un file su disco o un file inline. Ad esempio, collegamento e LIB accetta input da un file di risposta.