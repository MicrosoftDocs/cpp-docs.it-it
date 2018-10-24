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
ms.openlocfilehash: d93486d8df8cdb8bc253a0e71037f4e2ddf9e128
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890479"
---
# <a name="precompiled-header-files"></a>File di intestazione precompilata

Questi file vengono usati per compilare un file di intestazione precompilata denominato *Projname*.pch e un file di tipi precompilati denominato Stdafx.obj.

Questi file sono disponibili nella directory *Projname* . In Esplora soluzioni Stdafx.h si trova nella cartella File di intestazione e Stdafx.cpp si trova nella cartella File di origine.

|Nome file|Descrizione|
|---------------|-----------------|
|stdafx.h|File di inclusione per i file di inclusione di sistema standard e per i file di inclusione specifici del progetto che vengono usati frequentemente ma modificati raramente.<br /><br /> Non è necessario definire o annullare la definizione delle macro _AFX_NO_XXX in stdafx.h.|
|stdafx.cpp|Contiene la direttiva `#include "stdafx.h"` per il preprocessore e aggiunge file di inclusione per i tipi precompilati. I file precompilati di qualsiasi tipo, inclusi quelli di intestazione, supportano tempi di compilazione dal momento che effettuano questa operazione solo per i file per i quali è richiesta. Dopo la compilazione iniziale del progetto, le compilazioni successive risulteranno più rapide grazie alla presenza dei file di intestazione precompilata.|

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)<br>
[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)