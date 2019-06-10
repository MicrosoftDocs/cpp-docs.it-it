---
title: Problemi di compatibilità C++ tra Visual Studio 2015 e Visual Studio 2019
ms.date: 05/03/2019
helpviewer_keywords:
- binary compatibility, Visual C++
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
ms.openlocfilehash: 052874eb9273ee9a9ce1695ffdadedd9911673e1
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65449038"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-and-visual-studio-2019"></a>Problemi di compatibilità C++ tra Visual Studio 2015 e Visual Studio 2019

In Visual Studio 2013 e versioni precedenti, la compatibilità binaria tra file oggetto (OBJ), librerie statiche (LIB), librerie dinamiche (DLL) ed eseguibili (EXE) compilati usando versioni diverse del set di strumenti del compilatore e delle librerie di runtime non era garantita. 

In Visual Studio 2015 e versioni successive il numero principale del set di strumenti C++ è 14 (v140 per Visual Studio 2015, v141 per Visual Studio 2017 e v142 per Visual Studio 2019). Ciò rispecchia il fatto che sia le librerie di runtime che le applicazioni compilate con una di queste versioni del compilatore presentano la compatibilità binaria. Ciò significa che se si ha una libreria di terze parti compilata in Visual Studio 2015, non è necessario ricompilarla per utilizzarla da un'applicazione compilata con Visual Studio 2017 o Visual Studio 2019.

L'unica eccezione a questa regola è costituita dalle librerie statiche o dai file oggetto compilati con l'opzione `/GL` del compilatore, che non presentano la compatibilità binaria. 

Quando si combinano file binari compilati con versioni supportate diverse del set di strumenti MSVC, il componente ridistribuibile C++ in cui l'applicazione viene eseguita non può essere antecedente ad alcuna delle versioni del set di strumenti usate per compilare l'app o le librerie ridistribuibili che l'app utilizza. 

## <a name="see-also"></a>Vedere anche

[Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md)
