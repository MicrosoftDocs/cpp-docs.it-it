---
title: "Aggiunta del supporto ATL a un progetto MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.adding.atl.mfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, MFC (progetti)"
  - "MFC, ATL (supporto)"
ms.assetid: b5fe15d6-7752-4818-b9f9-62482ad35c95
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Aggiunta del supporto ATL a un progetto MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se si è già creata un'applicazione basata su MFC, è possibile aggiungere facilmente il supporto per una libreria ATL eseguendo la creazione guidata Aggiungi supporto ATL a MFC.  
  
> [!NOTE]
>  ATL e MFC non sono supportati in genere nelle edizioni express di Visual Studio.  
  
> [!NOTE]
>  È possibile utilizzare questo supporto solo per oggetti COM semplici aggiunti a un eseguibile MFC o a un progetto DLL.  È possibile aggiungere altri oggetti COM \(compresi i controlli ActiveX\) ai progetti MFC, ma tali oggetti potrebbero non funzionare nel modo previsto.  
  
### Per aggiungere supporto ATL a un progetto MFC  
  
1.  In Esplora soluzioni fare clic con il pulsante destro del mouse sul progetto al quale si desidera aggiungere il supporto ATL.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Scegliere l'icona **Aggiungi supporto ATL a MFC**.  
  
    > [!NOTE]
    >  L'icona si trova nella cartella ATL nel riquadro **Categorie**.  
  
4.  Quando richiesto, scegliere **Sì** per aggiungere il supporto ATL.  
  
 Per ulteriori informazioni sulle modifiche apportate al codice del progetto MFC dall'aggiunta di supporto ATL, vedere [Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata](../../mfc/reference/details-of-atl-support-added-by-the-atl-wizard.md)  
  
## Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)