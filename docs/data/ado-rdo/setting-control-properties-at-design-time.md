---
title: "Impostazione delle propriet&#224; di un controllo in fase di progettazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], proprietà"
ms.assetid: 963bf498-d371-4cfd-8bed-865427dcfad9
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Impostazione delle propriet&#224; di un controllo in fase di progettazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile impostare le proprietà dei controlli in fase di progettazione tramite l'editor finestra.  Quando si imposta una proprietà, l'editor di risorse inizializza il controllo con il valore specificato.  È sempre possibile modificare la proprietà a livello di codice.  
  
 La proprietà **DataSource**, presente in tutti i [controlli associati a dati](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md), consente di specificare il controllo dell'[origine dati](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md) con cui si desidera eseguire l'associazione.  
  
 Quando si associano controlli ADO semplici associati a dati a un controllo dati ADO \(ADODC\), è necessario associare il controllo a una colonna impostando la proprietà **DataField** su un campo valido nel rowset.  In caso contrario, durante l'esecuzione della build di debug dell'applicazione verrà eseguita un'asserzione per indicare che il controllo è stato associato a una colonna con valore null.  
  
> [!NOTE]
>  La scheda delle proprietà **Generale** consente di specificare un identificatore del controllo e altre proprietà necessarie per il file RC. Il file RC verrà compilato in seguito per generare il codice delle risorse di un programma per Windows.  
  
### Per impostare una proprietà nella scheda Tutte  
  
1.  [Inserire un controllo ActiveX](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md) in una finestra di dialogo.  
  
2.  Fare clic con il pulsante destro del mouse sul controllo nell'editor della finestra di dialogo, quindi scegliere **Proprietà**.  
  
3.  Fare clic sulla scheda **Tutte** per visualizzare le proprietà del controllo.  Immettere il valore di inizializzazione per una determinata proprietà.  
  
 Per impostare le proprietà dei controlli in fase di esecuzione, vedere [Modifica del comportamento di un controllo in fase di esecuzione](../../data/ado-rdo/modifying-a-control-s-run-time-behavior.md).  
  
## Vedere anche  
 [Utilizzo dei controlli ActiveX](../../data/ado-rdo/using-activex-controls.md)