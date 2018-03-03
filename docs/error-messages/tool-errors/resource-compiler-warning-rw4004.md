---
title: Avviso del compilatore di risorse RW4004 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- RW4004
dev_langs:
- C++
helpviewer_keywords:
- RW4004
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0249f7d01ee344f0fa17bdc39e58e9fce26c9b25
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-warning-rw4004"></a>Avviso del compilatore di risorse RW4004
Carattere ASCII non equivalente a codice tasto virtuale  
  
 È stato usato un valore letterale stringa per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.  
  
 Questo avviso permette di continuare, ma tenere presente che i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata (i tasti VIRTKEY usano codici tasto diversi rispetto ai tasti di scelta rapida ASCII).  
  
 Mentre i valori letterali stringa siano sintatticamente corretti, l'unico modo di ottenere l'acceleratore desiderato utilizzando il **VK _\* #define** valori in Windows. h.