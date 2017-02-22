---
title: "Errore irreversibile del compilatore di risorse RC1015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1015"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1015"
ms.assetid: 23f187e1-5538-40b5-9042-edd2888f55c2
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile del compilatore di risorse RC1015
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile aprire il file di inclusione "nomefile"  
  
 Il file di inclusione specificato non esiste, non può essere aperto o non è stato trovato.  
  
 Verificare che le impostazioni di ambiente siano valide e che il percorso del file sia stato specificato correttamente.  Assicurarsi che un numero sufficiente di handle di file sia disponibile per il compilatore di risorse.  Se il file si trova in un'unità di rete, verificare che siano disponibili le autorizzazioni per l'apertura del file.  
  
 L'errore RC1015 può verificarsi anche se il file di inclusione è presente in una directory specificata come directory di inclusione aggiuntiva nella pagina delle proprietà visualizzata selezionando Proprietà di configurazione \-\> Risorse \-\> Generale. Specificare il percorso completo del fila di inclusione.  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q326987: "RC1015 Error When Using Resource View If the Include Path is Too Long" \(informazioni in lingua inglese\).