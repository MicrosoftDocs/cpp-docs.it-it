---
title: /CLRUNMANAGEDCODECHECK (aggiunge SuppressUnmanagedCodeSecurityAttribute) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /CLRUNMANAGEDCODECHECK
dev_langs:
- C++
helpviewer_keywords:
- -CLRUNMANAGEDCODECHECK linker option
- /CLRUNMANAGEDCODECHECK linker option
ms.assetid: 73abc426-dab0-45e2-be85-0f9a14206cc2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 679adc527cc70056e1292eb7e639499bd814bca6
ms.sourcegitcommit: 7838764e09819822a105accf5d773b2e37ffa0ae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2018
ms.locfileid: "47429761"
---
# <a name="clrunmanagedcodecheck-add-suppressunmanagedcodesecurityattribute"></a>/CLRUNMANAGEDCODECHECK (aggiunge SuppressUnmanagedCodeSecurityAttribute)

**/CLRUNMANAGEDCODECHECK** specifica se verrà applicato <xref:System.Security.SuppressUnmanagedCodeSecurityAttribute> a generate dal linker `PInvoke` chiamate dal codice gestito in DLL native.

## <a name="syntax"></a>Sintassi

> **/CLRUNMANAGEDCODECHECK**[**: NO**]

## <a name="remarks"></a>Note

Per impostazione predefinita, il linker applica il **SuppressUnmanagedCodeSecurityAttribute** a generate dal linker `PInvoke` chiamate. Quando **/CLRUNMANAGEDCODECHECK** è in effetti **SuppressUnmanagedCodeSecurityAttribute** non viene applicato.

Il linker aggiunge solo l'attributo agli oggetti che vengono compilati con **/clr** oppure **/clr: pure**. Tuttavia, il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Oggetto `PInvoke` chiamata viene generata dal linker quando il linker non è possibile trovare un simbolo gestito per soddisfare un riferimento da un chiamante gestito ma è possibile trovare un simbolo nativo per soddisfare tale riferimento. Per altre informazioni sulle `PInvoke`, vedere [chiamata a funzioni Native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md).

Si noti che se si usa <xref:System.Security.AllowPartiallyTrustedCallersAttribute> nel codice, è necessario impostare esplicitamente **/CLRUNMANAGEDCODECHECK**. Se un'immagine contenente attributi AllowPartiallyTrustedCallers sia SuppressUnmanagedCodeSecurity è potenziali vulnerabilità di sicurezza.

Visualizzare [Secure linee guida di codifica per il codice non gestito](/dotnet/framework/security/secure-coding-guidelines-for-unmanaged-code) per altre informazioni sulle implicazioni dell'uso **SuppressUnmanagedCodeSecurityAttribute**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **controllo codice non gestito CLR** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRUnmanagedCodeCheck%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
- [Opzioni del linker](../../build/reference/linker-options.md)
