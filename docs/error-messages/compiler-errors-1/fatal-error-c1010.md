---
title: "Errore irreversibile C1010 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1010"
ms.assetid: dfd035f1-a7a2-40bc-bc92-dc4d7f456767
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1010
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

fine file imprevista durante la ricerca dell'intestazione precompilata.Si è omesso di aggiungere '\#include nome' all'origine?  
  
 Un file di inclusione specificato con [\/Yu](../../build/reference/yu-use-precompiled-header-file.md) non è elencato nel file di origine.  Questa opzione è attivata per impostazione predefinita nella maggior parte dei tipi di progetto Visual C\+\+ e "stdafx.h" è il file di inclusione predefinito specificato per l'opzione.  
  
 Per risolvere l'errore nell'ambiente di Visual Studio, utilizzare uno dei seguenti metodi:  
  
-   Se nel progetto non vengono utilizzate intestazioni precompilate, impostare la proprietà **Crea\/Usa intestazione precompilata** dei file di origine su **Senza intestazioni precompilate**.  Per impostare questa opzione del compilatore, attenersi alla seguente procedura:  
  
    1.  Nel riquadro Esplora soluzioni relativo al progetto fare clic con il pulsante destro del mouse sul nome del progetto, quindi scegliere **Proprietà**.  
  
    2.  Nel riquadro di sinistra fare clic sulla cartella **C\/C\+\+**.  
  
    3.  Fare clic sul nodo **Intestazioni precompilate**.  
  
    4.  Nel riquadro di destra fare clic su **Crea\/Usa intestazione precompilata**, quindi scegliere **Senza intestazioni precompilate**.  
  
-   Assicurarsi di non aver inavvertitamente eliminato, rinominato o rimosso il file di intestazione, per impostazione predefinita stdafx.h, dal progetto corrente.  È inoltre necessario includere questo file nei file di origine prima di qualsiasi altro codice utilizzando **\#include "stdafx.h"**. Questo file di intestazione viene specificato come proprietà del progetto **Crea\/Usa PCH tramite file**.