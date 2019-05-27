---
title: /CLRUNMANAGEDCODECHECK (rimuove SuppressUnmanagedCodeSecurityAttribute)
ms.date: 05/16/2019
ms.topic: reference
f1_keywords:
- /CLRUNMANAGEDCODECHECK
helpviewer_keywords:
- -CLRUNMANAGEDCODECHECK linker option
- /CLRUNMANAGEDCODECHECK linker option
ms.assetid: 73abc426-dab0-45e2-be85-0f9a14206cc2
author: corob-msft
ms.author: corob
ms.openlocfilehash: ecc560673a8e98752289ef0e0f89d3abfc1938e4
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837247"
---
# <a name="clrunmanagedcodecheck-remove-suppressunmanagedcodesecurityattribute"></a>/CLRUNMANAGEDCODECHECK (rimuove SuppressUnmanagedCodeSecurityAttribute)

**/CLRUNMANAGEDCODECHECK** specifica che il linker non applica <xref:System.Security.SuppressUnmanagedCodeSecurityAttribute> alle chiamate `PInvoke` generate dal linker dal codice gestito in DLL native.

## <a name="syntax"></a>Sintassi

> **/CLRUNMANAGEDCODECHECK**[**:NO**]

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il linker applica **SuppressUnmanagedCodeSecurityAttribute** alle chiamate `PInvoke` generate dal linker. Quando **/CLRUNMANAGEDCODECHECK** è attivo, **SuppressUnmanagedCodeSecurityAttribute** viene rimosso. Per applicare in modo esplicito **SuppressUnmanagedCodeSecurityAttribute** alle chiamate `PInvoke` generate dal linker, è possibile usare **/CLRUNMANAGEDCODECHECK:NO**.

Il linker aggiunge l'attributo solo agli oggetti compilati con **/clr** o **/clr: pure**. Tuttavia, l'opzione del compilatore **/clr:pure** è deprecata in Visual Studio 2015 e non è supportata in Visual Studio 2017 e versioni successive.

Una chiamata `PInvoke` viene generata dal linker quando il linker non è in grado di trovare un simbolo gestito per soddisfare un riferimento da un chiamante gestito, ma può trovare un simbolo nativo per soddisfare tale riferimento. Per altre informazioni su `PInvoke`, vedere [Chiamata a funzioni native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md).

Si noti che se si usa <xref:System.Security.AllowPartiallyTrustedCallersAttribute> nel codice, è necessario impostare in modo esplicito **/CLRUNMANAGEDCODECHECK** per rimuovere l'attributo **SuppressUnmanagedCodeSecurity**. Si tratta di una potenziale vulnerabilità di sicurezza se un'immagine contiene entrambi gli attributi **SuppressUnmanagedCodeSecurity** e **AllowPartiallyTrustedCallers**.

Vedere [Linee guida per la creazione di codice sicuro applicabili al codice non gestito](/dotnet/framework/security/secure-coding-guidelines-for-unmanaged-code) per altre informazioni sulle implicazioni dell'uso di **SuppressUnmanagedCodeSecurityAttribute**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **Avanzate**.

1. Modificare la proprietà **Controllo codice non gestito CLR**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRUnmanagedCodeCheck%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
