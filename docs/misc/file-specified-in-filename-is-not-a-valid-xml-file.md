---
title: "Il file specificato in FileName non &#232; un file XML valido | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: c4c30bf3-e0ad-4bc8-89e0-2c3e49e9793b
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il file specificato in FileName non &#232; un file XML valido
Il nome file fornito non è un file XML valido. Per specificare la struttura e il contenuto consentito di un documento XML, è possibile usare una definizione DTD \(Document Type Definition\), uno schema XDR \(XML\-Data Reduced\) o uno schema XSD \(XML Schema Definition Language\).  Gli schemi XSD rappresentano modo migliore per specificare le grammatiche XML in [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  
  
> [!NOTE]
>  Nelle precedenti versioni di Visual Studio, **Progettazione XML** è la finestra di progettazione per i dataset tipizzati e lo schema XML. È ancora possibile usare **Progettazione XML** per creare e modificare i file di schema XML. In [!INCLUDE[vs_current_long](../misc/includes/vs_current_long_md.md)], tuttavia, la finestra di progettazione per la creazione e la modifica di dataset tipizzati è **Progettazione DataSet**. Per altre informazioni, vedere [Creazione e modifica di dataset tipizzati](../Topic/Creating%20and%20Editing%20Typed%20Datasets.md).  
  
### Per correggere l'errore  
  
-   Verificare che il nome file fornito sia corretto.  
  
-   Accertarsi che il file specificato contenga XML valido, caricando il file XML che si vuole verificare in **Progettazione XML**. Scegliere **Convalida dati XML** dal menu **XML**. Gli errori sono visualizzati nell'**Elenco attività**.  
  
-   Se il file XML ha uno schema XML associato, verificare che gli elementi appaiano nella struttura definita e che il contenuto dei singoli elementi sia conforme ai tipi di dati dichiarati specificati nello schema.  
  
## Vedere anche  
 <xref:System.Xml>   
 [Procedura: analizzare percorsi di file](../Topic/How%20to:%20Parse%20File%20Paths%20in%20Visual%20Basic.md)