---
title: '@InStr | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- '@InStr'
dev_langs:
- C++
helpviewer_keywords:
- '@InStr symbol'
ms.assetid: 980d5b9f-2b88-4306-8955-df6cd2133e68
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d0fb92987de21f653440d6c4cc23d726ad323b69
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32049281"
---
# <a name="instr"></a>@InStr
Funzione di macro che trova la prima occorrenza di *string2* in *string1*, a partire da *posizione* all'interno di *string1*. Se *posizione* non è visualizzato, ricerca inizia all'inizio della *string1*. Restituisce un intero posizione oppure 0 se *string2* non viene trovato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
@InStr( [[position]], string1, string2 )  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti ai simboli](../../assembler/masm/symbols-reference.md)