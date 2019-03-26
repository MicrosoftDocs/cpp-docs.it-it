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
ms.openlocfilehash: ef81a6617df811660506c08434f3b65e29155794
ms.sourcegitcommit: 6e4dd21759caaed262a7255735cf8d6e8fb9f4d7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/26/2019
ms.locfileid: "58476838"
---
# <a name="link-pass-options-to-linker"></a>/link (passaggio delle opzioni al linker)

Passa una o più opzioni del linker al linker.

## <a name="syntax"></a>Sintassi

> **/link** *linker-options*

## <a name="arguments"></a>Argomenti

*linker-options*<br/>
L'opzione del linker o le opzioni da passare al linker.

## <a name="remarks"></a>Note

Il **/Link** opzione e le relative opzioni del linker devono comparire dopo eventuali nomi di file e le opzioni di CL. È necessario tra uno spazio **/Link** e `linkeroptions`. Per altre informazioni, vedere [riferimento linker MSVC](linking.md).

## <a name="example"></a>Esempio

Questa riga di comando di esempio viene compilato *Hello. cpp* e lo collega al file di oggetto esistente *there.obj*. Passa quindi un ulteriore **/VERSION** comando del linker:

`cl /W4 /EHsc hello.cpp there.obj /link /VERSION:3.14`

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

L'IDE è in genere invia comandi separati per compilare e collegare il codice. È possibile impostare le opzioni del linker nella pagina delle proprietà del progetto.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** cartella.

1. Modificare una o più proprietà. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
