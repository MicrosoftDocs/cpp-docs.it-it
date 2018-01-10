---
title: Errore irreversibile C1010 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1010
dev_langs: C++
helpviewer_keywords: C1010
ms.assetid: dfd035f1-a7a2-40bc-bc92-dc4d7f456767
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8b2123118be2a8a382f6b718499c5af16f88d111
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1010"></a>Errore irreversibile C1010
fine file imprevista durante la ricerca dell'intestazione precompilata. Si è omesso di aggiungere ' #include nome ' all'origine?  
  
 Un file di inclusione specificato con [/Yu](../../build/reference/yu-use-precompiled-header-file.md) non è elencato nel file di origine.  Questa opzione è abilitata per impostazione predefinita nella maggior parte dei tipi di progetto Visual C++ e "stdafx. h" è il valore predefinito includono file specificato da questa opzione.  
  
 Nell'ambiente di Visual Studio, utilizzare uno dei metodi seguenti per risolvere questo errore:  
  
-   Se non si utilizzano intestazioni precompilate nel progetto, impostare il **Crea/Usa intestazione precompilata** proprietà del file di origine **senza intestazioni precompilate**. Per impostare l'opzione del compilatore, seguire questi passaggi:  
  
    1.  Nel riquadro Esplora soluzioni del progetto, fare doppio clic sul nome del progetto e quindi fare clic su **proprietà**.  
  
    2.  Nel riquadro a sinistra, fare clic su di **C/C++** cartella.  
  
    3.  Fare clic su di **intestazioni precompilate** nodo.  
  
    4.  Nel riquadro di destra, fare clic su **Crea/Usa intestazione precompilata**, quindi fare clic su **senza intestazioni precompilate**.  
  
-   Assicurarsi che sono stati inavvertitamente eliminato, rinominati o rimossi file di intestazione (per impostazione predefinita, stdafx. h) dal progetto corrente. Questo file deve inoltre essere incluso prima di qualsiasi altro codice nel file di origine utilizzando **#include "stdafx. h"**. (Questo file di intestazione è specificato come **Crea/Usa PCH tramite File** proprietà del progetto)