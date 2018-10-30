---
title: Problemi di compatibilità C++ tra Visual Studio 2015 e Visual Studio 2017 | Microsoft Docs
ms.custom: ''
ms.date: 09/24/2018
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- binary compatibility, Visual C++
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6f6d81f5cdce8955194985f66863940b97e32d40
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50065525"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-and-visual-studio-2017"></a>Problemi di compatibilità C++ tra Visual Studio 2015 e Visual Studio 2017

Nelle versioni precedenti di Visual Studio, la compatibilità binaria tra file oggetto (OBJ), librerie statiche (LIB), librerie dinamiche (DLL) ed eseguibili (EXE) compilati usando versioni diverse del set di strumenti del compilatore e delle librerie di runtime non era garantita. In Visual Studio 2017 non è più così. In Visual Studio 2015 e Visual Studio 2017 il numero principale del set di strumenti C++ è 14 (v140 per Visual Studio 2015 e v141 per Visual Studio 2017). Ciò rispecchia il fatto che sia le librarie di runtime che le applicazioni compilate con una delle due versioni del compilatore presentano per lo più la compatibilità binaria. Se ad esempio si ha una DLL in Visual Studio 2015, non è necessario ricompilarla per utilizzarla da un'applicazione compilata con Visual Studio 2017.

Esistono due eccezioni a questa regola. In questi casi non è garantita la compatibilità binaria:

1. Quando le librerie statiche o i file oggetto vengono compilati con l'opzione del compilatore `/GL`.

2. Quando si utilizzano librerie create con un set di strumenti la cui versione è successiva a quella del set di strumenti usato per compilare e collegare l'applicazione. Ad esempio, un programma compilato e collegato con la versione del compilatore 19.12 può utilizzare librerie compilate con le versioni da 19.0 a 19.12. La compatibilità binaria inoltre esiste solo tra Visual Studio 2015 e Visual Studio 2017. Il collegamento di programmi 19.x con librerie prodotte da Visual Studio 2013 o versione precedente non è supportato.

## <a name="see-also"></a>Vedere anche

[Cronologia delle modifiche di Visual C++](..\porting\visual-cpp-change-history-2003-2015.md)
