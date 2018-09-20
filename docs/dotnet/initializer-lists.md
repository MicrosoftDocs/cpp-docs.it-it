---
title: Gli elenchi di inizializzatori | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- initializer lists
ms.assetid: b3e53442-9809-4105-9226-ae845bd20cae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 981f2737d370dc25ca4e7dc6c20947b3867a0c65
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394608"
---
# <a name="initializer-lists"></a>Elenchi di inizializzatori

Gli elenchi di inizializzatori di costruttori vengono chiamati subito prima del costruttore di classe di base.

## <a name="remarks"></a>Note

Prima di Visual C++ 2005, il costruttore di classe di base è stato chiamato prima dell'elenco dell'inizializzatore durante la compilazione con le estensioni gestite per C++. A questo punto, durante la compilazione con **/clr**, viene chiamato prima di tutto l'elenco di inizializzatori.

## <a name="see-also"></a>Vedere anche

[Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)