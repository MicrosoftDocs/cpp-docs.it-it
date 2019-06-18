---
title: /link (passaggio delle opzioni al linker)
ms.date: 03/25/2019
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
ms.openlocfilehash: 37743e855c933b6236b5e7a837db257f332a3037
ms.sourcegitcommit: bbaf65f8ed1af12828b38f8eacd24f934ac0e538
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/17/2019
ms.locfileid: "67155777"
---
# <a name="link-pass-options-to-linker"></a>/link (passaggio delle opzioni al linker)

Passa una o più opzioni del linker al linker.

## <a name="syntax"></a>Sintassi

> **/link** *linker-options*

## <a name="arguments"></a>Argomenti

*linker-options*<br/>
L'opzione del linker o le opzioni da passare al linker.

## <a name="remarks"></a>Note

Il **/Link** opzione e le relative opzioni del linker devono comparire dopo eventuali nomi di file e le opzioni di CL. È necessario tra uno spazio **/Link** e le opzioni del linker. Per altre informazioni, vedere [riferimento linker MSVC](linking.md).

## <a name="example"></a>Esempio

Questa riga di comando di esempio viene compilato *Hello. cpp* e lo collega al file di oggetto esistente *there.obj*. Passa quindi un ulteriore **/VERSION** comando del linker:

`cl /W4 /EHsc hello.cpp there.obj /link /VERSION:3.14`

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

L'IDE è in genere invia comandi separati per compilare e collegare il codice. È possibile impostare le opzioni del linker nella pagina delle proprietà del progetto.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** cartella.

1. Modificare una o più proprietà. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
