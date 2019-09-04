---
title: '/Experimental: modulo (Abilita supporto modulo)'
description: "Usare l'opzione del compilatore/Experimental: Module per abilitare il supporto del compilatore sperimentale per i moduli."
ms.date: 09/03/2019
f1_keywords:
- module
- /experimental:module
helpviewer_keywords:
- module
- /experimental:module
- Enable module support
ms.openlocfilehash: 82cce127ad5a2f87d11e4a653035bd80ea9f5001
ms.sourcegitcommit: fd0f8839da5c6a3663798a47c6b0bb6e63b518bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2019
ms.locfileid: "70294458"
---
# <a name="experimentalmodule-enable-module-support"></a>/Experimental: modulo (Abilita supporto modulo)

Abilita il supporto del compilatore sperimentale per i moduli, come specificato dallo standard bozza C++ 20.

## <a name="syntax"></a>Sintassi

> **/Experimental: modulo** [ **-** ]

## <a name="remarks"></a>Note

È possibile abilitare il supporto dei moduli sperimentali usando l'opzione del compilatore **/Experimental: module** insieme all'opzione [/std: c + + Latest](std-specify-language-standard-version.md) . È possibile usare **/Experimental: module** per disabilitare in modo esplicito il supporto del modulo.

Questa opzione è disponibile a partire da Visual Studio 2015 Update 1. A partire da Visual Studio 2019 versione 16,2, i moduli standard di Draft C++ 20 non sono implementati C++ completamente nel compilatore Microsoft. È possibile utilizzare la funzionalità moduli per creare moduli a partizione singola e per importare i moduli di libreria standard forniti da Microsoft. Un modulo e il codice che lo utilizza devono essere compilati con le stesse opzioni del compilatore.

Per ulteriori informazioni sui moduli e su come utilizzarli e crearli, vedere [Cenni preliminari C++sui moduli in ](../../cpp/modules-cpp.md).

Di seguito è riportato un esempio delle opzioni della riga di comando del compilatore usate per creare un modulo Export dal file di origine *ModuleName. IXX*:

```cmd
cl /EHsc /MD /experimental:module /module:export /module:name ModuleName /module:wrapper C:\Output\path\ModuleName.h /module:output C:\Output\path\ModuleName.ifc -c ModuleName.ixx
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione** >  > **C/C++** **Language** .

1. Modificare la **proprietà C++ Abilita moduli (sperimentale)** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)
