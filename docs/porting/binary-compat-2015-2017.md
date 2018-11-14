---
title: Problemi di compatibilità C++ tra Visual Studio 2015 e Visual Studio 2017
ms.date: 09/24/2018
helpviewer_keywords:
- binary compatibility, Visual C++
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
ms.openlocfilehash: e526002bdca0eee122531f39c195aef3474cc61c
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51329826"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-and-visual-studio-2017"></a>Problemi di compatibilità C++ tra Visual Studio 2015 e Visual Studio 2017

Nelle versioni precedenti di Visual Studio, la compatibilità binaria tra file oggetto (OBJ), librerie statiche (LIB), librerie dinamiche (DLL) ed eseguibili (EXE) compilati usando versioni diverse del set di strumenti del compilatore e delle librerie di runtime non era garantita. In Visual Studio 2017 non è più così. In Visual Studio 2015 e Visual Studio 2017 il numero principale del set di strumenti C++ è 14 (v140 per Visual Studio 2015 e v141 per Visual Studio 2017). Ciò rispecchia il fatto che sia le librarie di runtime che le applicazioni compilate con una delle due versioni del compilatore presentano per lo più la compatibilità binaria. Se ad esempio si ha una DLL in Visual Studio 2015, non è necessario ricompilarla per utilizzarla da un'applicazione compilata con Visual Studio 2017.

Esistono due eccezioni a questa regola. In questi casi non è garantita la compatibilità binaria:

1. Quando le librerie statiche o i file oggetto vengono compilati con l'opzione del compilatore `/GL`.

2. Quando si utilizzano librerie create con un set di strumenti la cui versione è successiva a quella del set di strumenti usato per compilare e collegare l'applicazione. Ad esempio, un programma compilato e collegato con la versione del compilatore 19.12 può utilizzare librerie compilate con le versioni da 19.0 a 19.12. La compatibilità binaria inoltre esiste solo tra Visual Studio 2015 e Visual Studio 2017. Il collegamento di programmi 19.x con librerie prodotte da Visual Studio 2013 o versione precedente non è supportato.

## <a name="see-also"></a>Vedere anche

[Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md)
