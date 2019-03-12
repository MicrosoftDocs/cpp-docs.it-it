---
title: File di intestazione precompilata
ms.date: 11/04/2016
f1_keywords:
- stdafx.h
helpviewer_keywords:
- stdafx.h
- PCH files, file descriptions
- .pch files, file descriptions
- precompiled header files, file descriptions
- stdafx.cpp
ms.assetid: 8228d87a-5609-41f3-9697-b16094c000e5
ms.openlocfilehash: c9df203aac7d43c4c16850dd617639a85234917b
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57740886"
---
# <a name="precompiled-header-files"></a>File di intestazione precompilata

Questi file vengono usati per compilare un file di intestazione precompilata denominato *Projname*.pch e un file di tipi precompilati denominato Stdafx.obj.

Questi file sono disponibili nella directory *Projname* . In Esplora soluzioni Stdafx.h si trova nella cartella File di intestazione e Stdafx.cpp si trova nella cartella File di origine.

|Nome file|Description|
|---------------|-----------------|
|stdafx.h|File di inclusione per i file di inclusione di sistema standard e per i file di inclusione specifici del progetto che vengono usati frequentemente ma modificati raramente.<br /><br /> Non è necessario definire o annullare la definizione delle macro _AFX_NO_XXX in stdafx.h.|
|stdafx.cpp|Contiene la direttiva `#include "stdafx.h"` per il preprocessore e aggiunge file di inclusione per i tipi precompilati. I file precompilati di qualsiasi tipo, inclusi quelli di intestazione, supportano tempi di compilazione dal momento che effettuano questa operazione solo per i file per i quali è richiesta. Dopo la compilazione iniziale del progetto, le compilazioni successive risulteranno più rapide grazie alla presenza dei file di intestazione precompilata.|

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)<br>
[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)
