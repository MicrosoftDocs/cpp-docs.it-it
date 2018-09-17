---
title: -link (passaggio delle opzioni al Linker) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /link
dev_langs:
- C++
helpviewer_keywords:
- /link compiler option [C++]
- pass options to linker
- link compiler option [C++]
- linker [C++], passing options to
- -link compiler option [C++]
- cl.exe compiler [C++], passing options to linker
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 663407e4948ebc4e3c0a1676c44e8d2b4bd53fcc
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704119"
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