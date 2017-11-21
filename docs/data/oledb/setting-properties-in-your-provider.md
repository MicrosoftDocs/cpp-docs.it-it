---
title: "Impostazione delle proprietà nel Provider | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE DB providers, properties
- properties [C++], OLE DB provider
ms.assetid: 26a8b493-7ec4-4686-96d0-9ad5d2bca5ac
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 80b82e1fb69200f45716b2ad62a44160862f7d08
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="setting-properties-in-your-provider"></a>Impostazione di proprietà nel provider
Trovare il gruppo di proprietà e l'ID di proprietà per la proprietà desiderata. Per ulteriori informazioni, vedere [proprietà OLE DB](https://msdn.microsoft.com/en-us/library/ms722734.aspx) nel *riferimento per programmatori OLE DB*.  
  
 Nel codice del provider generato dalla procedura guidata, trovare il mapping di proprietà corrispondente al gruppo di proprietà. Il nome del gruppo di proprietà in genere corrisponde al nome dell'oggetto. Proprietà set di righe e di comando è reperibile nel comando o set di righe. proprietà di inizializzazione e l'origine dati sono disponibili nell'oggetto di origine dati.  
  
 Nel mapping della proprietà, aggiungere un [PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md) (macro). PROPERTY_INFO_ENTRY_EX accetta quattro parametri:  
  
-   L'ID di proprietà corrispondente alla proprietà. È necessario rimuovere i primi sette caratteri DBPROP ("_") dall'inizio del nome della proprietà. Ad esempio, se si desidera aggiungere **DBPROP_MAXROWS**, passare `MAXROWS` come primo elemento. Se si tratta di una proprietà personalizzata, passare il nome completo di GUID (ad esempio, `DBMYPROP_MYPROPERTY`).  
  
-   Il tipo variant della proprietà (in [proprietà OLE DB](https://msdn.microsoft.com/en-us/library/ms722734.aspx) nel *riferimento per programmatori OLE DB*). Immettere il **VT _** tipo (ad esempio `VT_BOOL` o `VT_I2`) corrispondente al tipo di dati.  
  
-   Flag per indicare se la proprietà è leggibile e scrivibile e il gruppo a cui appartiene. Ad esempio, il codice seguente indica una proprietà di lettura/scrittura che appartengono al gruppo di set di righe:  
  
    ```  
    DBPROPFLAGS_ROWSET | DBPROPFLAGS_READ | DBPROPFLAGS_WRITE  
    ```  
  
-   Valore della proprietà di base. Potrebbe trattarsi di **VARIANT_FALSE** per un valore booleano digitare oppure zero per un tipo integer, ad esempio. La proprietà ha questo valore, a meno che non venga modificato.  
  
    > [!NOTE]
    >  Alcune proprietà sono connessi o concatenate ad altre proprietà, ad esempio segnalibri o l'aggiornamento. Quando un consumer imposta una proprietà su true, è possibile impostare anche un'altra proprietà. I modelli di provider OLE DB supportano questo tramite il metodo [CUtlProps:: OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md).  
  
## <a name="properties-ignored-by-microsoft-ole-db-providers"></a>Proprietà ignorata dal provider Microsoft OLE DB  
 I provider Microsoft OLE DB ignora le proprietà OLE DB seguenti:  
  
-   **DBPROP_MAXROWS** funziona solo per i provider di sola lettura (ovvero, in cui DBPROP_IRowsetChange e DBPROP_IRowsetUpdate sono false); in caso contrario questa proprietà non è supportata.  
  
-   **DBPROP_MAXPENDINGROWS** viene ignorato; il provider specifica il limite.  
  
-   **DBPROP_MAXOPENROWS** viene ignorato; il provider specifica il limite.  
  
-   **DBPROP_CANHOLDROWS** viene ignorato; il provider specifica il limite.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)