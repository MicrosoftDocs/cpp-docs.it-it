---
title: "Symbol Name Restrictions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.symbol.restrictions.name"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbol names"
  - "symbols, names"
  - "restrictions, symbol names"
ms.assetid: 4ae7f695-ca86-4f4b-989a-fe6f89650ff7
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Symbol Name Restrictions
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I nomi dei simboli sono soggetti alle restrizioni riportate di seguito.  
  
-   È necessario che tutti i [simboli](../mfc/symbols-resource-identifiers.md) siano univoci nell'area di validità dell'applicazione.  In questo modo si evitano conflitti tra le definizioni dei simboli nei file di intestazione.  
  
-   I caratteri validi per il nome di un simbolo includono i caratteri maiuscoli e minuscoli dalla A alla Z, i numeri da 0 a 9 e i caratteri di sottolineatura \( \_ \).  
  
-   I nomi dei simboli non possono iniziare con un numero e sono limitati a 247 caratteri.  
  
-   I nomi dei simboli non possono contenere spazi.  
  
-   Ai nomi dei simboli non viene applicata la distinzione tra maiuscole e minuscole. I caratteri maiuscoli o minuscoli della prima definizione del simbolo vengono tuttavia mantenuti.  Il file di intestazione che definisce i simboli viene usato sia dal compilatore e dall'editor di risorse sia da uno o più programmi C\+\+ per fare riferimento alle risorse definite in un file di risorse.  Se due nomi di simbolo differiscono solo nell'utilizzo di lettere maiuscole e minuscole, nel programma C\+\+ verranno visualizzati due simboli separati, mentre nel compilatore e nell'editor di risorse verranno visualizzati entrambi i nomi come se facessero riferimento a un unico simbolo.  
  
    > [!NOTE]
    >  Se non ci si attiene allo schema dei nomi di simbolo standard illustrato di seguito \(ID\*\_\[parola chiave\]\) e il nome del simbolo coincide con una parola chiave nota al compilatore dello script di risorsa, il tentativo di compilare il file script di risorsa determinerà una generazione di errori apparentemente casuale, difficile da diagnosticare.  Per evitare questo problema, è necessario attenersi allo schema di denominazione standard.  
  
 I nomi dei simboli dispongono di prefissi descrittivi che indicano il tipo di risorsa o di oggetto che rappresentano.  Tali prefissi descrittivi iniziano con l'ID di combinazione testo.  La libreria MFC usa le convenzioni di denominazione dei simboli illustrate nella tabella seguente.  
  
|Categoria|Prefisso|Usa|  
|---------------|--------------|---------|  
|Risorse|IDR\_ IDD\_ IDC\_ IDI\_ IDB\_|Bitmap dell'icona del cursore della finestra di dialogo del tasto di scelta rapida o menu \(risorse associate o personalizzate\)|  
|Voci di menu|ID\_|Voce di menu|  
|Comandi|ID\_|Comando|  
|Controlli e finestra figlio|IDC\_|Controllo|  
|Stringhe|IDS\_|Stringa nella tabella di stringhe|  
|MFC|AFX\_|Riservati per simboli MFC predefiniti|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Changing a Symbol or Symbol Name \(ID\)](../windows/changing-a-symbol-or-symbol-name-id.md)   
 [Symbol Value Restrictions](../windows/symbol-value-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)