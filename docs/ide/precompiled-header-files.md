---
title: File di intestazione precompilata | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- stdafx.h
dev_langs:
- C++
helpviewer_keywords:
- stdafx.h
- PCH files, file descriptions
- .pch files, file descriptions
- precompiled header files, file descriptions
- stdafx.cpp
ms.assetid: 8228d87a-5609-41f3-9697-b16094c000e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4595ea9ce27c40fb798ac050ce456c4d43b2cacb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33328087"
---
# <a name="precompiled-header-files"></a>File di intestazione precompilata
Questi file vengono usati per compilare un file di intestazione precompilata denominato *Projname*.pch e un file di tipi precompilati denominato Stdafx.obj.  
  
 Questi file sono disponibili nella directory *Projname* . In Esplora soluzioni Stdafx.h si trova nella cartella File di intestazione e Stdafx.cpp si trova nella cartella File di origine.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|stdafx.h|File di inclusione per i file di inclusione di sistema standard e per i file di inclusione specifici del progetto che vengono usati frequentemente ma modificati raramente.<br /><br /> È opportuno evitare di definire o annullare la definizione delle macro _AFX_NO_XXX di stdafx.h. Vedere l'articolo della Knowledge Base "PRB: Problemi durante la definizione di _AFX_NO_XXX". Gli articoli della Knowledge Base sono disponibili in MSDN Library o all'indirizzo [http://support.microsoft.com/](http://%20support.microsoft.com/).|  
|stdafx.cpp|Contiene la direttiva `#include "stdafx.h"` per il preprocessore e aggiunge file di inclusione per i tipi precompilati. I file precompilati di qualsiasi tipo, inclusi quelli di intestazione, supportano tempi di compilazione dal momento che effettuano questa operazione solo per i file per i quali è richiesta. Dopo la compilazione iniziale del progetto, le compilazioni successive risulteranno più rapide grazie alla presenza dei file di intestazione precompilata.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)   
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)