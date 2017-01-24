---
title: "Symbol Value Restrictions | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.symbol.restrictions.value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbols, value restrictions"
  - "restrictions, symbol values"
ms.assetid: 32467ec3-690b-4cd0-a4d0-7d189a3296cb
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Symbol Value Restrictions
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il valore di un simbolo può essere qualsiasi numero intero espresso in modo normale per le direttive \#define per il preprocessore.  Di seguito sono riportati alcuni esempi di valori di simboli:  
  
```  
18  
4001  
0x0012  
-3456  
```  
  
 I valori dei simboli per le risorse \(tasti di scelta rapida, bitmap, cursori, finestre di dialogo, icone, menu, tabelle di stringhe e informazioni sulla versione\) devono essere numeri decimali compresi tra 0 e 32.767, ma non possono essere valori esadecimali.  I valori dei simboli per gli elementi delle risorse, quali i controlli delle finestre di dialogo o le singole stringhe nella tabella di stringhe, possono essere compresi tra 0 e 65.534 oppure tra \-32.768 e 32.767.  
  
 I simboli delle risorse sono numeri a 16 bit.  È possibile immetterli come valori con o senza segno, ma vengono usati internamente come Unsigned Integer.  Per i numeri negativi viene pertanto eseguito il cast ai corrispondenti valori positivi.  
  
 Di seguito sono riportate alcune restrizioni relative ai valori dei simboli:  
  
-   L'ambiente di sviluppo Visual Studio e MFC usano alcuni intervalli di numeri per scopi specifici.  Tutti i numeri con il bit più significativo impostato \(da \-32.768 a \-1 oppure da 32.768 a 65.534, a seconda del segno\) sono riservati da MFC.  
  
-   Non è possibile definire il valore di un simbolo mediante altre stringhe di simbolo.  Non è ad esempio supportata la seguente definizione di simbolo:  
  
    ```  
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported  
    ```  
  
-   Non è possibile usare macro del preprocessore con argomenti come definizioni dei valori.  Ad esempio:  
  
    ```  
    #define   IDD_ABOUT  ID(7) //not supported  
    ```  
  
     non è un'espressione valida indipendentemente dal valore valutato da `ID` in fase di compilazione.  
  
-   L'applicazione potrebbe disporre di un file esistente contenente simboli definiti con espressioni.  Per altre informazioni su come includere i simboli come simboli di sola lettura, vedere la pagina relativa all'[utilizzo di simboli condivisi \(di sola lettura\) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).  
  
 Per altre informazioni sugli intervalli di numeri, vedere [TN023: Risorse MFC standard](../mfc/tn023-standard-mfc-resources.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Changing a Symbol's Numeric Value](../windows/changing-a-symbol-s-numeric-value.md)   
 [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)