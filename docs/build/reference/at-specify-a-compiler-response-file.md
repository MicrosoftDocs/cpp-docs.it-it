---
description: 'Altre informazioni su: @ (specifica un file di risposta del compilatore)'
title: '@ (Specifica un file di risposta del compilatore)'
ms.date: 11/04/2016
f1_keywords:
- '@'
helpviewer_keywords:
- response files, C/C++ compiler
- '@ compiler option'
- cl.exe compiler, specifying response files
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
ms.openlocfilehash: bd2859f7973723d93594693902e92ac3530d73ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182892"
---
# <a name="-specify-a-compiler-response-file"></a>@ (Specifica un file di risposta del compilatore)

Specifica un file di risposta del compilatore.

## <a name="syntax"></a>Sintassi

> **\@**<em>response_file</em>

## <a name="arguments"></a>Argomenti

*response_file*<br/>
File di testo contenente i comandi del compilatore.

## <a name="remarks"></a>Commenti

Un file di risposta può contenere tutti i comandi da specificare nella riga di comando. Questa operazione può essere utile se gli argomenti della riga di comando superano i 127 caratteri.

Non è possibile specificare l'opzione in **\@** un file di risposta. Ovvero un file di risposta non può incorporare un altro file di risposta.

Dalla riga di comando è possibile specificare il numero desiderato di opzioni del file di risposta, ad esempio `@respfile.1 @respfile.2` .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

- Non è possibile specificare un file di risposta dall'interno dell'ambiente di sviluppo e deve essere specificato dalla riga di comando.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
