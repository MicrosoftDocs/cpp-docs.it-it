---
title: 2.7 ambiente dei dati | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e018a2c1b20bef640852ced913dc90266e733c06
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="27-data-environment"></a>2.7 Ambiente dei dati
Questa sezione viene presentata una direttiva e più clausole per controllare l'ambiente di dati durante l'esecuzione di aree parallele, come indicato di seguito:  
  
-   Oggetto **threadprivate** (direttiva) (vedere la sezione seguente) viene fornito per rendere locale a un thread in ambito file, all'ambito dello spazio dei nomi o variabili statiche con ambito blocco.  
  
-   Le clausole che possono essere specificate per le direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti paralleli o di condivisione lavoro sono descritti in [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.