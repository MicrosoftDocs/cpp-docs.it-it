---
title: 2.7 ambiente dei dati | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d1b0f253ce14ffc5d3740e582a9a51feea56ad32
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33690065"
---
# <a name="27-data-environment"></a>2.7 Ambiente dei dati
Questa sezione viene presentata una direttiva e più clausole per controllare l'ambiente di dati durante l'esecuzione di aree parallele, come indicato di seguito:  
  
-   Oggetto **threadprivate** (direttiva) (vedere la sezione seguente) viene fornito per rendere locale a un thread in ambito file, all'ambito dello spazio dei nomi o variabili statiche con ambito blocco.  
  
-   Le clausole che possono essere specificate per le direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti paralleli o di condivisione lavoro sono descritti in [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.