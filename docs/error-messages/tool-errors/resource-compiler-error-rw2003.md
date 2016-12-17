---
title: "Errore del compilatore di risorse RW2003 | Microsoft Docs"
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
  - "RW2003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW2003"
ms.assetid: 9dc0ba70-6776-4aef-b316-5f1711d8e42e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore di risorse RW2003
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore di generazione.  
  
### Possibili cause  
  
1.  **Errore: il file di risorsa di file bitmap non è in formato 3.00.**  
  
     Le bitmap in formato Windows versione 2.x non possono essere utilizzate nei file di risorse versione 3.x.  La bitmap specificata dovrà essere ridisegnata o convertita in formato 3.x.  
  
2.  **Errore: DIB in formato precedente nel nome di risorsa.  Elaborare il file con SDKPAINT**  
  
     Un file DIB \(Device Independent Bitmap, bitmap indipendente dalla periferica\) all'interno della risorsa specificata non è compatibile con il formato Windows 3.0.  L'immagine bitmap dovrà essere ridisegnata o convertita in formato 3.x.  
  
3.  **Errore: il nome risorsa del file di risorsa non è in formato 3.00.**  
  
     Il formato di un'icona o di un cursore all'interno della risorsa specificata risulta essere di una precedente versione di Windows.  L'icona o il cursore dovrà essere ridisegnato o convertito in formato 3.x.  
  
4.  **Formato di intestazione DIB sconosciuto.**  
  
     L'intestazione della bitmap non è una struttura BITMAPCOREHEADER o BITMAPINFOHEADER.  
  
5.  **Impossibile inizializzare le informazioni sui simboli.**  
  
     Questo errore si verifica solo in Visual C\+\+.  È possibile che vi siano troppi file aperti o che non sia possibile aprire o scrivere nei file di dati richiesti da Visual C\+\+ per l'importazione dei simboli nello script.  Visual C\+\+ tenta di creare questi file nella directory specificata dalla variabile di ambiente **TMP** o, se non specificata, nella directory corrente.  
  
6.  **Impossibile salvare le informazioni sui simboli.**  
  
     Questo errore si verifica solo in Visual C\+\+.  È possibile che vi siano troppi file aperti o che non sia possibile chiudere o scrivere nei file di dati richiesti da Visual C\+\+ per l'importazione dei simboli nello script.  Visual C\+\+ tenta di utilizzare questi file nella directory specificata dalla variabile di ambiente **TMP** o, se non specificata, nella directory corrente.  
  
7.  **Il file di risorsa del file bitmap non è in formato 2.03.**  
  
     Una bitmap utilizza un formato precedente alla versione 2.03.  La bitmap dovrà essere convertita o ridisegnata utilizzando il formato per le versioni 3.00 e successive.  
  
8.  **Risorsa troppo grande.**  
  
     In Windows 3.1 la dimensione di una risorsa non può superare i 65.000 byte.  Se la risorsa è di dimensioni superiori, non potrà essere compilata con Visual C\+\+ o con il compilatore di risorse della riga di comando.  Questo limite non si applica a cursori, icone, immagini bitmap o altre risorse basate su file.  
  
9. **Il file di risorsa non è in formato 3.00.**  
  
     Un cursore o un'icona risulta essere in un formato precedente alla versione 3.00.  La risorsa dovrà essere convertita o ridisegnata utilizzando il formato per le versioni 3.00 e successive.  
  
10. **Impossibile aprire il file temporaneo.**  
  
     Non è possibile aprire un file temporaneo con il compilatore di risorse o con Visual C\+\+.  È possibile che siano disponibili le autorizzazioni di scrittura sulla directory o che la directory non esista.  Il compilatore di risorse o Visual C\+\+ tenta di utilizzare questi file nella directory specificata dalla variabile di ambiente **TMP** o, se non specificata, nella directory corrente.