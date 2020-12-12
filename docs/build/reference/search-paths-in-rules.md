---
description: 'Altre informazioni su: percorsi di ricerca nelle regole'
title: Percorsi di ricerca nelle regole
ms.date: 11/04/2016
helpviewer_keywords:
- search paths in NMAKE inference rules
- inference rules in NMAKE
- rules, inference
ms.assetid: 38feded6-536d-425d-bf40-fff3173a5506
ms.openlocfilehash: bf070fc57907b68eb458b8a5276698282ef30f9d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224881"
---
# <a name="search-paths-in-rules"></a>Percorsi di ricerca nelle regole

```
{frompath}.fromext{topath}.toext:
   commands
```

## <a name="remarks"></a>Commenti

Una regola di inferenza si applica a una dipendenza solo se i percorsi specificati nella dipendenza corrispondono esattamente ai percorsi della regola di inferenza. Specificare la directory del dipendente in *frompath* e la directory di destinazione in *toPath*; non sono consentiti spazi. Specificare un solo percorso per ogni estensione. Un percorso in un'estensione richiede un percorso sull'altro. Per specificare la directory corrente, utilizzare un punto (.) o parentesi graffe vuote ({}). Le macro possono rappresentare *frompath* e *toPath*; vengono richiamati durante la pre-elaborazione.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```
{dbi\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUDBI) $<

{ilstore\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{misc\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{misc\}.c{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{msf\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{bsc\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{mre\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{namesrvr\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{src\cvr\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<
```

## <a name="see-also"></a>Vedi anche

[Definizione di una regola](defining-a-rule.md)
