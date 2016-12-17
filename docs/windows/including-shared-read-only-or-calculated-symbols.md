---
title: "Including Shared (Read-Only) or Calculated Symbols | Microsoft Docs"
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
  - "vc.editors.symbol.shared.calculated"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbols, read-only"
  - "symbols, shared"
  - "symbols, calculated"
  - "read-only symbols"
  - "symbol directives"
  - "calculated symbols"
  - "shared symbols"
ms.assetid: 32b77faf-a066-4371-a072-9a5b84c0766d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Including Shared (Read-Only) or Calculated Symbols
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La prima volta che l'ambiente di sviluppo legge un file di risorse creato da un'altra applicazione, contrassegna tutto, inclusi i file di intestazione, come di sola lettura.  Successivamente, è possibile usare la [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md) per aggiungere file di intestazione simboli di sola lettura.  
  
 Un motivo per cui è possibile voler usare le definizioni dei simboli di sola lettura è per i file di simboli che si intende condividere tra più progetti.  
  
 Inoltre, è possibile usare file di simboli inclusi quando si dispone di risorse esistenti con le definizioni dei simboli che usano espressioni anziché semplici numeri interi per definire il valore di simbolo.  Ad esempio:  
  
```  
#define   IDC_CONTROL1 2100  
#define   IDC_CONTROL2 (IDC_CONTROL1+1)  
```  
  
 L'ambiente interpreterà correttamente questi simboli calcolati purché:  
  
-   I simboli calcolati siano inseriti in un file di simboli di sola lettura.  
  
-   Il file di risorse contenga risorse a cui sono già stati assegnati questi simboli calcolati.  
  
-   È prevista un'espressione numerica.  
  
> [!NOTE]
>  Se è prevista una stringa o un'espressione numerica, l'espressione non è valutata.  
  
### Per includere simboli condivisi \(di sola lettura\) nel file di risorse  
  
1.  Fare clic con il pulsante destro del mouse sul file RC nel riquadro [Visualizzazione risorse](../windows/resource-view-window.md) e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella casella **Direttive per simboli di sola lettura** usare la direttiva del compilatore **\#include** per specificare il file in cui si vogliono mantenere i simboli di sola lettura.  
  
     Non chiamare il file Resource.h, poiché questo è il nome file in genere usato dal file di intestazione simboli principale.  
  
    > [!NOTE]
    >  **Importante** il testo digitato nella casella Direttive per simboli di sola lettura viene incluso nel file di risorse esattamente così come è stato immesso.  Verificare che il tipo non contenga errori di ortografia o di sintassi.  
  
     Usare la casella **Direttive per simboli di sola lettura** per includere i file con solo definizioni dei simboli.  Non includere definizioni di risorse, altrimenti, verranno create definizioni di risorse duplicate quando viene salvato il file.  
  
3.  Inserire i simboli nel file specificato.  
  
     I simboli nei file inseriti in questo modo vengono valutati ogni volta che si apre il file di risorse, ma non vengono sostituiti sul disco quando si salva il file.  
  
4.  Fare clic su **OK**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)   
 [Symbol Value Restrictions](../windows/symbol-value-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)   
 [Symbols: Resource Identifiers](../mfc/symbols-resource-identifiers.md)