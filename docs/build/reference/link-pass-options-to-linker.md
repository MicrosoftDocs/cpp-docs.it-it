---
title: /link (passaggio delle opzioni al linker)
ms.date: 11/04/2016
f1_keywords:
- /link
helpviewer_keywords:
- /link compiler option [C++]
- pass options to linker
- link compiler option [C++]
- linker [C++], passing options to
- -link compiler option [C++]
- cl.exe compiler [C++], passing options to linker
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
ms.openlocfilehash: dfa39988782a0c5bd121b6e18402d3f6b67a13e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50574928"
---
# <a name="link-pass-options-to-linker"></a>/link (passaggio delle opzioni al linker)

Passa una o più opzioni del linker al linker.

## <a name="syntax"></a>Sintassi

```
/link linkeroptions
```

## <a name="arguments"></a>Argomenti

*linkeroption*<br/>
L'opzione del linker o le opzioni da passare al linker.

## <a name="remarks"></a>Note

Il **/Link** opzione e le relative opzioni del linker devono comparire dopo eventuali nomi di file e le opzioni di CL. È necessario tra uno spazio **/Link** e `linkeroptions`. Per altre informazioni, vedere [impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic su una pagina delle proprietà del linker.

1. Modificare una o più proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)