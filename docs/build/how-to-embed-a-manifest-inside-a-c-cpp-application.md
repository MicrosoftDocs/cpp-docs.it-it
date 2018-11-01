---
title: "Procedura: incorporare un manifesto in un'applicazione C/C++"
ms.date: 11/04/2016
helpviewer_keywords:
- manifests [C++]
- embedding manifests
- makefiles, updating to embed manifest
ms.assetid: ec0bac69-2fdc-466c-ab0d-710a22974e5d
ms.openlocfilehash: c3557d22f51207687c6c0adde80b4cd5b3293afd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50624864"
---
# <a name="how-to-embed-a-manifest-inside-a-cc-application"></a>Procedura: incorporare un manifesto in un'applicazione C/C++

È consigliabile che un'applicazione C/C++ (o libreria) abbiano il manifesto incorporato all'interno del file binario finale perché in questo modo il comportamento di runtime corretto nella maggior parte degli scenari. Per impostazione predefinita, Visual Studio prova a incorporare il manifesto durante la generazione di un progetto da file di origine. visualizzare [generazione di manifesti in Visual Studio](../build/manifest-generation-in-visual-studio.md) per altre informazioni. Tuttavia se un'applicazione viene compilata usando nmake, sono necessarie alcune modifiche al makefile esistente. In questa sezione viene illustrato come modificare un makefile esistente per incorporare automaticamente il manifesto nel file binario finale.

## <a name="two-approaches"></a>Due approcci

Esistono due modi per incorporare il manifesto in un'applicazione o una libreria.

- Se non si sta eseguendo una compilazione incrementale è possibile incorporare direttamente il manifesto tramite la riga di comando simile al seguente come passaggio di post-compilazione:

   **MT.exe-manifest MyApp.exe.manifest-outputresource:MyApp.exe;1**

   oppure

   **MT.exe-manifest MyLibrary.dll.manifest-outputresource:MyLibrary.dll;2**

   (1 per un file EXE, 2 per una DLL).

- Se si esegue una compilazione incrementale, la modifica diretta della risorsa come illustrato di seguito verrà disabilitare la compilazione incrementale e causare una ricompilazione completa, di conseguenza debba adottare un approccio diverso:

   - Collegare il file binario per generare il file MyApp.exe.manifest.

   - Convertire il manifesto in un file di risorse.

   - Collegare nuovamente (incrementale) per incorporare la risorsa del manifesto nel file binario.

Gli esempi seguenti illustrano come modificare makefile per incorporare entrambe le tecniche.

## <a name="makefiles-before"></a>Makefile (prima)

Si consideri lo script di nmake per MyApp.exe, una semplice applicazione generata da un file:

```
# build MyApp.exe
!if "$(DEBUG)" == "1"
CPPFLAGS=$(CPPFLAGS) /MDd
LFLAGS=$(LFLAGS) /INCREMENTAL
!else
CPPFLAGS=$(CPPFLAGS) /MD
!endif

MyApp.exe : MyApp.obj
    link $** /out:$@ $(LFLAGS)

MyApp.obj : MyApp.cpp

clean :
    del MyApp.obj MyApp.exe
```

Se questo script viene eseguito senza modifiche con Visual C++, crea correttamente MyApp.exe. Crea anche il file manifesto esterno MyApp.exe.manifest, da usare dal sistema operativo per caricare gli assembly dipendenti in fase di esecuzione.

Lo script di nmake per MyLibrary. dll è molto simile:

```
# build MyLibrary.dll
!if "$(DEBUG)" == "1"
CPPFLAGS=$(CPPFLAGS) /MDd
LFLAGS=$(LFLAGS) /DLL /INCREMENTAL

!else
CPPFLAGS=$(CPPFLAGS) /MD
LFLAGS=$(LFLAGS) /DLL

!endif

MyLibrary.dll : MyLibrary.obj
    link $** /out:$@ $(LFLAGS)

MyLibrary.obj : MyLibrary.cpp

clean :
    del MyLibrary.obj MyLibrary.dll
```

## <a name="makefiles-after"></a>Makefile (dopo)

Per compilare con incorporati manifesti che è necessario apportare quattro modifiche minime per i makefile originali. Per il makefile MyApp.exe:

```
# build MyApp.exe
!include makefile.inc
#^^^^^^^^^^^^^^^^^^^^ Change #1. (Add full path if necessary.)

!if "$(DEBUG)" == "1"
CPPFLAGS=$(CPPFLAGS) /MDd
LFLAGS=$(LFLAGS) /INCREMENTAL
!else
CPPFLAGS=$(CPPFLAGS) /MD
!endif

MyApp.exe : MyApp.obj
    link $** /out:$@ $(LFLAGS)
    $(_VC_MANIFEST_EMBED_EXE)
#^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Change #2

MyApp.obj : MyApp.cpp

clean :
    del MyApp.obj MyApp.exe
    $(_VC_MANIFEST_CLEAN)
#^^^^^^^^^^^^^^^^^^^^^^^^ Change #3

!include makefile.targ.inc
#^^^^^^^^^^^^^^^^^^^^^^^^^ Change #4. (Add full path if necessary.)
```

Per il makefile MyLibrary. dll:

```
# build MyLibrary.dll
!include makefile.inc
#^^^^^^^^^^^^^^^^^^^^ Change #1. (Add full path if necessary.)

!if "$(DEBUG)" == "1"
CPPFLAGS=$(CPPFLAGS) /MDd
LFLAGS=$(LFLAGS) /DLL /INCREMENTAL

!else
CPPFLAGS=$(CPPFLAGS) /MD
LFLAGS=$(LFLAGS) /DLL

!endif

MyLibrary.dll : MyLibrary.obj
    link $** /out:$@ $(LFLAGS)
    $(_VC_MANIFEST_EMBED_DLL)
#^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Change #2.

MyLibrary.obj : MyLibrary.cpp

clean :
    del MyLibrary.obj MyLibrary.dll
    $(_VC_MANIFEST_CLEAN)
#^^^^^^^^^^^^^^^^^^^^^^^^ Change #3.

!include makefile.targ.inc
#^^^^^^^^^^^^^^^^^^^^^^^^^ Change #4. (Add full path if necessary.)
```

I makefile includono ora due file che il lavoro effettivo, l'effettivo e makefile.targ.inc.

Creare effettivo e copiarvi il seguente:

```
# makefile.inc -- Include this file into existing makefile at the very top.

# _VC_MANIFEST_INC specifies whether build is incremental (1 - incremental).
# _VC_MANIFEST_BASENAME specifies name of a temporary resource file.

!if "$(DEBUG)" == "1"
CPPFLAGS=$(CPPFLAGS) /MDd
LFLAGS=$(LFLAGS) /INCREMENTAL
_VC_MANIFEST_INC=1
_VC_MANIFEST_BASENAME=__VC90.Debug

!else
CPPFLAGS=$(CPPFLAGS) /MD
_VC_MANIFEST_INC=0
_VC_MANIFEST_BASENAME=__VC90

!endif

####################################################
# Specifying name of temporary resource file used only in incremental builds:

!if "$(_VC_MANIFEST_INC)" == "1"
_VC_MANIFEST_AUTO_RES=$(_VC_MANIFEST_BASENAME).auto.res
!else
_VC_MANIFEST_AUTO_RES=
!endif

####################################################
# _VC_MANIFEST_EMBED_EXE - command to embed manifest in EXE:

!if "$(_VC_MANIFEST_INC)" == "1"

#MT_SPECIAL_RETURN=1090650113
#MT_SPECIAL_SWITCH=-notify_resource_update
MT_SPECIAL_RETURN=0
MT_SPECIAL_SWITCH=
_VC_MANIFEST_EMBED_EXE= \
if exist $@.manifest mt.exe -manifest $@.manifest -out:$(_VC_MANIFEST_BASENAME).auto.manifest $(MT_SPECIAL_SWITCH) & \
if "%ERRORLEVEL%" == "$(MT_SPECIAL_RETURN)" \
rc /r $(_VC_MANIFEST_BASENAME).auto.rc & \
link $** /out:$@ $(LFLAGS)

!else

_VC_MANIFEST_EMBED_EXE= \
if exist $@.manifest mt.exe -manifest $@.manifest -outputresource:$@;1

!endif

####################################################
# _VC_MANIFEST_CLEAN - command to clean resources files generated temporarily:

!if "$(_VC_MANIFEST_INC)" == "1"

_VC_MANIFEST_CLEAN=-del $(_VC_MANIFEST_BASENAME).auto.res \
    $(_VC_MANIFEST_BASENAME).auto.rc \
    $(_VC_MANIFEST_BASENAME).auto.manifest

!else

_VC_MANIFEST_CLEAN=

!endif

# End of makefile.inc
####################################################
```

A questo punto creare makefile.targ.inc e copiarvi il seguente:

```
# makefile.targ.inc - include this at the very bottom of the existing makefile

####################################################
# Commands to generate initial empty manifest file and the RC file
# that references it, and for generating the .res file:

$(_VC_MANIFEST_BASENAME).auto.res : $(_VC_MANIFEST_BASENAME).auto.rc

$(_VC_MANIFEST_BASENAME).auto.rc : $(_VC_MANIFEST_BASENAME).auto.manifest
    type <<$@
#include <winuser.h>
1RT_MANIFEST"$(_VC_MANIFEST_BASENAME).auto.manifest"
<< KEEP

$(_VC_MANIFEST_BASENAME).auto.manifest :
    type <<$@
<?xml version='1.0' encoding='UTF-8' standalone='yes'?>
<assembly xmlns='urn:schemas-microsoft-com:asm.v1' manifestVersion='1.0'>
</assembly>
<< KEEP

# end of makefile.targ.inc
```

## <a name="see-also"></a>Vedere anche

[Informazioni sulla generazione di manifesti per programmi C/C++](../build/understanding-manifest-generation-for-c-cpp-programs.md)
