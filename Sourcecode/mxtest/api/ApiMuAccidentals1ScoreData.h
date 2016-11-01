// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#pragma once

#include "mx/api/ScoreData.h"
#include "mx/api/Smufl.h"
#include "mx/impl/Converter.h"
#include "mx/core/Enums.h"

namespace mxtest
{
    inline mx::api::ScoreData apiMuAccidentals1ScoreData()
    {
        using namespace mx::api;
        ScoreData score;
        score.parts.emplace_back( PartData{} );
        score.ticksPerQuarter = 1;
        score.workNumber = "MuseScore testfile";
        score.workTitle = "Accidentals 1";
        score.composer = "Leon Vinken";
        score.encoding.encodingDate.year = 2007;
        score.encoding.encodingDate.month = 9;
        score.encoding.encodingDate.day = 10;
        
        auto& part = score.parts.front();
        part.uniqueId = "P1";
        part.name = "Staff 1";
        part.instrumentData.uniqueId = "P1-I3";
        part.instrumentData.name = "Staff 1";
        part.midiData.uniqueId = "P1-I3";
        part.midiData.channel = 1;
        part.midiData.program = 1;
        part.midiData.volume = 0;
        part.midiData.isVolumeSpecified = true;
        part.midiData.pan = 90;
        part.midiData.isPanSpecified = true;

        part.measures.emplace_back( MeasureData{} );
        auto measure = &part.measures.back();
        measure->timeSignature.beats = 3;
        measure->timeSignature.beatType = 4;
        measure->timeSignature.isImplicit = false;
        measure->staves.emplace_back( StaffData{} );
        auto staff = &measure->staves.back();
        staff->keys.emplace_back( KeyData{} );
        auto& key = staff->keys.back();
        key.mode = KeyMode::major;
        staff->clefs.emplace_back( ClefData{} );
        auto& clef = staff->clefs.back();
        clef.line = 2;
        
        staff->voices[0].notes.emplace_back( NoteData{} );
        auto note = &staff->voices[0].notes.back();
        note->pitchData.step = Step::g;
        note->pitchData.octave = 4;
        note->durationData.durationName = DurationName::quarter;
        note->durationData.durationTimeTicks = 1;
        note->pitchData.accidental = Accidental::none;
        note->stem = Stem::up;
        
        staff->voices[0].notes.emplace_back( NoteData{} );
        note = &staff->voices[0].notes.back();
        note->pitchData.step = Step::a;
        note->pitchData.octave = 4;
        note->pitchData.alter = 1;
        note->durationData.durationName = DurationName::quarter;
        note->durationData.durationTimeTicks = 1;
        note->pitchData.accidental = Accidental::sharp;
        note->stem = Stem::up;
        
        staff->voices[0].notes.emplace_back( NoteData{} );
        note = &staff->voices[0].notes.back();
        note->pitchData.step = Step::b;
        note->pitchData.octave = 4;
        note->pitchData.alter = -1;
        note->durationData.durationName = DurationName::quarter;
        note->durationData.durationTimeTicks = 1;
        note->pitchData.accidental = Accidental::flat;
        note->stem = Stem::down;
        
        part.measures.emplace_back( MeasureData{} );
        measure = &part.measures.back();
        measure->timeSignature.beats = 3;
        measure->timeSignature.beatType = 4;
        measure->timeSignature.isImplicit = true;
        measure->staves.emplace_back( StaffData{} );
        staff = &measure->staves.back();
        
        staff->voices[0].notes.emplace_back( NoteData{} );
        note = &staff->voices[0].notes.back();
        note->pitchData.step = Step::c;
        note->pitchData.octave = 5;
        note->pitchData.alter = 2;
        note->durationData.durationName = DurationName::quarter;
        note->durationData.durationTimeTicks = 1;
        note->pitchData.accidental = Accidental::doubleSharp;
        note->stem = Stem::down;
        
        staff->voices[0].notes.emplace_back( NoteData{} );
        note = &staff->voices[0].notes.back();
        note->pitchData.step = Step::d;
        note->pitchData.octave = 5;
        note->pitchData.alter = -2;
        note->durationData.durationName = DurationName::quarter;
        note->durationData.durationTimeTicks = 1;
        note->pitchData.accidental = Accidental::flatFlat;
        note->stem = Stem::down;
        
        staff->voices[0].notes.emplace_back( NoteData{} );
        note = &staff->voices[0].notes.back();
        note->pitchData.step = Step::d;
        note->pitchData.octave = 5;
        note->pitchData.alter = 0;
        note->durationData.durationName = DurationName::quarter;
        note->durationData.durationTimeTicks = 1;
        note->pitchData.accidental = Accidental::natural;
        note->stem = Stem::down;
        
        return score;
    }
}
