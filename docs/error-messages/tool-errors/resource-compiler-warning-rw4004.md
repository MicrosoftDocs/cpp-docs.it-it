---
title: Avviso del compilatore di risorse RW4004 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RW4004
dev_langs:
- C++
helpviewer_keywords:
- RW4004
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 94bd1c043ac5660c5cb8fc8b2bfa1dd2f6968b55
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33337106"
---
# <a name="resource-compiler-warning-rw4004"></a>Avviso del compilatore di risorse RW4004
Carattere ASCII non equivalente a codice tasto virtuale  
  
 È stato usato un valore letterale stringa per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.  
  
 Questo avviso permette di continuare, ma tenere presente che i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata (i tasti VIRTKEY usano codici tasto diversi rispetto ai tasti di scelta rapida ASCII).  
  
 Mentre i valori letterali stringa siano sintatticamente corretti, l'unico modo di ottenere l'acceleratore desiderato utilizzando il **VK _\* #define** valori in Windows. h.