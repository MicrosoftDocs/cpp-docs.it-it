---
title: "File di intestazione precompilata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ""stdafx.h""
  - "stdafx.h"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stdafx.h"
  - "file PCH, descrizioni di file"
  - "file con estensione pch, descrizioni di file"
  - "file di intestazione precompilata, descrizioni di file"
  - "stdafx.cpp"
ms.assetid: 8228d87a-5609-41f3-9697-b16094c000e5
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# File di intestazione precompilata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questi file vengono usati per compilare un file di intestazione precompilata denominato *Projname*.pch e un file di tipi precompilati denominato Stdafx.obj.  
  
 Questi file sono disponibili nella directory *Projname*. In Esplora soluzioni Stdafx.h si trova nella cartella File di intestazione e Stdafx.cpp si trova nella cartella File di origine.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|Stdafx.h|File di inclusione per i file di inclusione di sistema standard e per i file di inclusione specifici del progetto che vengono usati frequentemente ma modificati raramente.<br /><br /> È opportuno evitare di definire o annullare la definizione delle macro \_AFX\_NO\_XXX di stdafx.h. Vedere l'articolo della Knowledge Base "PRB: Problemi durante la definizione di \_AFX\_NO\_XXX". Gli articoli della Knowledge Base sono disponibili in MSDN Library o all'indirizzo [http:\/\/support.microsoft.com\/](http://%20support.microsoft.com/).|  
|Stdafx.cpp|Contiene la direttiva `#include "stdafx.h"` per il preprocessore e aggiunge file di inclusione per i tipi precompilati. I file precompilati di qualsiasi tipo, inclusi quelli di intestazione, supportano tempi di compilazione dal momento che effettuano questa operazione solo per i file per i quali è richiesta. Dopo la compilazione iniziale del progetto, le compilazioni successive risulteranno più rapide grazie alla presenza dei file di intestazione precompilata.|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)   
 [Procedura: specificare le proprietà dei progetti tramite Pagine delle proprietà](../misc/how-to-specify-project-properties-with-property-pages.md)